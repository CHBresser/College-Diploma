#ifndef INCLUDED_COLLEGESTUDENT_RESTRICT
#define INCLUDED_COLLEGESTUDENT_RESTRICT

#include <iostream>
#include <string>

using namespace std;

class collegeStudent
{
	private:
		string college;
		string lastName;
		string firstName;
		string middleIn;
		string degreeType;
		int month;
		int year;
		int day;
	public:
		collegeStudent(); //Default Constructor
		string getCollege();
		void setCollege(string);
		string getLast();
		void setLast(string);
		string getFirst();
		void setFirst(string);
		string getMiddle();
		void setMiddle(string);
		string getDegree();
		void setDegree(string);
		int getMonth();
		void setMonth(int);
		int getDay();
		void setDay(int);
		int getYear();
		void setYear(int);
		string yearTranslation(); //Converts int year to a longhand notation
		string monthTranslation(); //Convers int month to a longhand notation
		string dayTranslation(); //Converts int day to a longhand notation
		void outputToConsole(collegeStudent [], int); //Handles the output to the console with formatting and such
};


#endif //INCLUDED_COLLEGESTUDENT_RESTRICT