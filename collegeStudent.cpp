//The implementation of the collegeStudent class
#include "stdafx.h"
#include "CollegeStudent.h"
#include "CollegeDiplomas.h"
#include <iostream>
#include <string>

using namespace std;

collegeStudent::collegeStudent()    //Default Constructor
{
	college = " ";
	lastName = " ";
	firstName = " ";
	middleIn = " ";
	degreeType = " ";
	month = -1;
	day = -1;
	year = -1;
};

string collegeStudent::getCollege()
{
	return college;  // Return the value of college
};

void collegeStudent::setCollege(string setValue)
{
	college = setValue; //User inputs value and it is set to college
};

string collegeStudent::getLast()
{
	return lastName; // Return the value of lastName
};

void collegeStudent::setLast(string setValue)
{
	lastName = setValue; //Set lastname to the parameter value
};

string collegeStudent::getFirst()
{
	return firstName;  //Returns the value of first name
};

void collegeStudent::setFirst(string setValue)
{
	firstName = setValue; //Set firstName to the parameter value
};

string collegeStudent::getMiddle()
{
	return middleIn; // Returns the value of middleIn
};

void collegeStudent::setMiddle(string setValue)
{
	middleIn = setValue; //Set middleIn to the parameter value
};

string collegeStudent::getDegree()
{
	return degreeType; //Returns the value of degreeType
};

void collegeStudent::setDegree(string setValue)
{
	degreeType = setValue; //Sets degreeType to the parameter value
};
int collegeStudent::getMonth()
{
	return month; //Returns the value of month
};
void collegeStudent::setMonth(int setValue)
{
	month = setValue; //Set month to the parameter value
};
int collegeStudent::getYear()
{
	return year; //Returns the value of year
};
void collegeStudent::setYear(int setValue)
{
	year = setValue; //Set year to the parameter value
};
int collegeStudent::getDay()
{
	return day; //Returns the value of day
};
void collegeStudent::setDay(int setValue)
{
	day = setValue; //Sets day to the parameter value
};
string collegeStudent::yearTranslation()
{
	string yearStr, yearStr1;
	

	if((year / 10) == 2) //Move the decimal place left and cut off decimal value
	{
		yearStr = "two thousand twenty";
	}
	else if ((year / 10) == 3)
	{
		yearStr = "two thousand thirty";
	}
	else if ((year / 10) == 4)
	{
		yearStr = "two thousand forty";
	}
	else if ((year / 10) == 1)
	{
		if ((year % 10) == 0)
		{
			yearStr = "two thousand ten";
		}
		else if ((year % 10) == 1)
		{
			yearStr = "two thousand eleven";
		}
		else if ((year % 10) == 2)
		{
			yearStr = "two thousand twelve";
		}
		else if ((year % 10) == 3)
		{
			yearStr = "two thousand thirteen";
		}
		else if ((year % 10) == 4)
		{
			yearStr = "two thousand fourteen";
		}
		else if ((year % 10) == 5)
		{
			yearStr = "two thousand fifteen";
		}
		else if (( year % 10) == 6)
		{
			yearStr = "two thousand sixteen";
		}
		else if ((year % 10) == 7)
		{
			yearStr = "two thousand seventeen";
		}
		else if ((year % 10) == 8)
		{
			yearStr = "two thousand eighteen";
		}
		else if ((year % 10) == 9)
		{
			yearStr = "two thousand nineteen";
		}
	}

	if ((year % 10) == 1 && year / 10 != 1)
	{
		yearStr1 = " one";
	}
	else if ((year % 10) == 2 && year / 10 != 1)
	{
		yearStr1 = " two";
	}
	else if ((year % 10) == 3 && year / 10 != 1)
	{
		yearStr1 = " three";
	}
	else if ((year % 10) == 4 && year / 10 != 1)
	{
		yearStr1 = " four";
	}
	else if ((year % 10) == 5 && year / 10 != 1)
	{
		yearStr1 = " five";
	}
	else if ((year % 10) == 6 && year / 10 != 1)
	{
		yearStr1 = " six";
	}
	else if ((year % 10) == 7 && year / 10 != 1)
	{
		yearStr1 = " seven";
	}
	else if ((year % 10) == 8 && year / 10 != 1)
	{
		yearStr1 = " eight";
	}
	else if ((year % 10) == 9 && year / 10 != 1)
	{
		yearStr1 = " nine";
	}

	yearStr += yearStr1;

	return yearStr;
}
string collegeStudent::monthTranslation()
{
	string monthS;

	if (month == 1)
        monthS = "January";
    else if (month == 2)
        monthS = "February";
    else if (month == 3)
        monthS = "March";
    else if (month == 4)
        monthS = "April";
    else if (month == 5)
        monthS = "May";
    else if (month == 6)
        monthS = "June";
    else if (month == 7)
        monthS = "July";
    else if (month == 8)
        monthS = "August";
    else if (month == 9)
        monthS = "September";
    else if (month == 10)
        monthS = "October";
    else if (month == 11)
        monthS = "November";
    else if (month == 12)
        monthS = "December";

	return monthS;
}
string collegeStudent::dayTranslation()
{
	string dayS, dayS1;

	if((day / 10) == 2) //Move the decimal place left and cut off decimal value
	{
		dayS = "twenty";
	}
	else if ((day / 10) == 3)
	{
		dayS = "thirty";
	}
	else if ((year / 10) == 1)
	{
		if ((day % 10) == 0)
		{
			dayS = "tenth";
		}
		else if ((day % 10) == 1)
		{
			dayS = "eleventh";
		}
		else if ((day % 10) == 2)
		{
			dayS = "twelveth";
		}
		else if ((day % 10) == 3)
		{
			dayS = "thirteenth";
		}
		else if ((day % 10) == 4)
		{
			dayS = "fourteenth";
		}
		else if ((day % 10) == 5)
		{
			dayS = "fifteenth";
		}
		else if (( day % 10) == 6)
		{
			dayS = "sixteenth";
		}
		else if ((day % 10) == 7)
		{
			dayS = "seventeenth";
		}
		else if ((day % 10) == 8)
		{
			dayS = "eighteenth";
		}
		else if ((day % 10) == 9)
		{
			dayS = "nineteenth";
		}
	}

	if ((day % 10) == 1 && day / 10 != 1)
	{
		dayS1 = "-first";
	}
	else if ((day % 10) == 2 && day / 10 != 1)
	{
		dayS1 = "-second";
	}
	else if ((day % 10) == 3 && day / 10 != 1)
	{
		dayS1 = "-third";
	}
	else if ((day % 10) == 4 && day / 10 != 1)
	{
		dayS1 = "-fourth";
	}
	else if ((day % 10) == 5 && day / 10 != 1)
	{
		dayS1 = "-fifth";
	}
	else if ((day % 10) == 6 && day / 10 != 1)
	{
		dayS1 = "-sixth";
	}
	else if ((day % 10) == 7 && day / 10 != 1)
	{
		dayS1 = "-seventh";
	}
	else if ((day % 10) == 8 && day / 10 != 1)
	{
		dayS1 = "-eighth";
	}
	else if ((day % 10) == 9 && day / 10 != 1)
	{
		dayS1 = "-nineth";
	}

	dayS += dayS1;

	return dayS;
}
void collegeStudent::outputToConsole(collegeStudent listofStudents[], int numElems)
{
	for (int i = 0; i < numElems - 1; i++)
	{
		string tempOutput; // for use for the none variable output
		string fullName, dayOutput;
		
		//This folling action combines all the string values for the name
		// They are combined so that formatting for center alignment is correct for all days
		fullName = (listofStudents[i].getFirst() + " " + listofStudents[i].getMiddle() + ". "
			+ listofStudents[i].getLast());

		//This following action combines all the string values for day along with the necessary filler
		// words for use on the diploma
		// They are combined so that formatting for center alignment is correct for all days
		dayOutput = "on this " + listofStudents[i].dayTranslation() //Call dayTranslation()
			+ " day of " + listofStudents[i].monthTranslation(); //Call monthTranslation
		cout << endl; 
		centerTheOutput(listofStudents[i].getCollege()); //Call getCollege()
		cout << endl;
		tempOutput = "has conferred upon";
		centerTheOutput(tempOutput);
		cout << endl;
		centerTheOutput(fullName);
		cout << endl;
		tempOutput = "the degree of";
		centerTheOutput(tempOutput);
		cout << endl;
		centerTheOutput(listofStudents[i].getDegree());
		cout << endl;
		tempOutput = "with all right and privileges thereto pertaining";
		centerTheOutput(tempOutput);
		cout << endl;
		centerTheOutput(dayOutput);
		cout << endl;

		dayOutput = "in the year " + listofStudents[i].yearTranslation();

		centerTheOutput(dayOutput);

		cout << endl << endl << endl;
	}
}

void centerTheOutput(string lengthneeded)
{
	int length, pos;

	length = lengthneeded.length(); //Calls a function in the string library

	pos = (int) ((60-length)/2); //Finds center align 60 is maximum size of window subtracts the length of the string and finds the middle

	for (int i = 0; i < pos; i++)
	{
		cout << " "; //Outputs one space each iteration until centered
	}
	cout << lengthneeded; // output the string
}
