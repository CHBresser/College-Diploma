#ifndef INCLUDED_DATE_RESTRICT
#define INCLUDED_DATE_RESTRICT

//This file contains the date object which has a few
// private variables and a set and get function for
// all of them
#include "stdafx.h"
#include <iostream>
#include <string>

using namespace std;

class dateObject
{
	private:
		int day;
		int year;
		int month;
	public:
		dateObject(); //Default Constructor
		dateObject(int, int, int); //Parameterized Constructor
		int getDay();
		void setDay(int);
		int getMonth();
		void setMonth(int);
		int getYear();
		void setYear(int);
};



#endif //INCLUDED_DATE_RESTRICT