#include "stdafx.h"
#include <iostream>
#include "fileManagement.h"
#include "StringTokenizer.h"
#include "date.h"
#include <fstream>
#include <string>

using namespace std;

//Deals with the input from file
void fileManagement(collegeStudent graduates[], int& numElems)
{
	//Variable Declarations
	ifstream fileIn;
	string inString;
	int index = 0;

	fileIn.open("gradInfo.txt");

	//IF file opened
	if (fileIn.is_open())
	{
		int counter = 0;
		getline(fileIn, inString); // Priming Read
		while (!fileIn.eof())
		{
			graduates[index] = setFromCoded(inString);
			getline(fileIn, inString);
			index++;
		}
		numElems = index;
	}
}

collegeStudent setFromCoded(string inString)
{
	string tempFirst, tempLast, tempDate, tempMiddle, tempDegree,
		tempCollege;
	int tempMonth, tempDay, tempYear;
	collegeStudent outReturn; // Object for return value

	//Use stringtokenizer
	StringTokenizer tokenizer(inString, ',');

	//Get Tokens for all the strings
	tempCollege = tokenizer.getStringToken();
	tempLast = tokenizer.getStringToken();
	tempFirst = tokenizer.getStringToken();
	tempMiddle = tokenizer.getStringToken();
	tempDegree = tokenizer.getStringToken();
	tempDate = tokenizer.getStringToken();

	//Retrieve the date components from the file
	StringTokenizer dateTokens(tempDate, '/');
	tempMonth = dateTokens.getIntToken();
	tempDay = dateTokens.getIntToken();
	tempYear = dateTokens.getIntToken();
	dateObject workDate(tempMonth, tempDay, tempYear); //Instantiate Date Object

	//Prepare record for return
	outReturn.setFirst(tempFirst);
	outReturn.setLast(tempLast);
	outReturn.setMiddle(tempMiddle);
	outReturn.setCollege(tempCollege);
	outReturn.setDay(tempDay);
	outReturn.setMonth(tempMonth);
	outReturn.setYear(tempYear);
	outReturn.setDegree(tempDegree);
	return outReturn;
}