//---------------------------------------------------------------|
//Programmer Name: Zach Bresser                                  |
//Date Written: 02/09/2015                                       |
//Purpose: Read data from an input file containing information   |
//    about a student and prints a diploma accordingly           |
//Included Files:                                                |
//    Source Code:                                               |
//       CollegeDiplomas.cpp                                     |
//       collegeStudent.cpp                                      |
//       date.cpp                                                |
//       fileManagement.cpp                                      |
//       sdafx.cpp     //Because this one was coded in VS        |
//       StringTokenizer.cpp (credits to T.Klingler)             |
//    Header Files:                                              |
//       CollegeStudent.h                                        |
//       CollegeDiplomas.h                                       |
//       date.h                                                  |
//       fileManagement.h                                        |
//       sdafx.h                                                 |
//       StringTokenizer.h (credits to T.Klingler)               |
//       targetver.h                                             |
//    Data Files:                                                |
//       gradInfo.txt                                            |
//---------------------------------------------------------------|
#include "stdafx.h"
#include <iostream>
#include <string>
#include "CollegeStudent.h"
#include "CollegeDiplomas.h"
#include "StringTokenizer.h"
#include "fileManagement.h"
#include "date.h"

using namespace std;

const int MAX_GRADUATES = 20;

int main()
{
	int numElems = 0;
	collegeStudent graduates[MAX_GRADUATES];
	fileManagement(graduates, numElems);

	for (int i = 0; i < numElems; i++)
	{
		degreeType(graduates[i].getDegree(), i, graduates);
	}
	graduates[0].outputToConsole(graduates, numElems);
	system("pause");
}

//This function when given a abbreviated degree converts
// it into longhand notation
void degreeType(string degree, int notation, collegeStudent graduates[])
{
	if (degree == "A.A.")
	{
		degree = "Associate of Arts";
		graduates[notation].setDegree(degree);
	}
	else if (degree == "A.S.")
	{
		degree = "Associate of Science";
		graduates[notation].setDegree(degree);
	}
	else if (degree == "A.A.S.")
	{
		degree = "Associate of Applied Science";
		graduates[notation].setDegree(degree);
	}
	else if (degree == "B.A.")
	{
		degree = "Bachelor of Arts";
		graduates[notation].setDegree(degree);
	}
	else if (degree == "B.S.")
	{
		degree = "Bachelor of Science";
		graduates[notation].setDegree(degree);
	}
}

