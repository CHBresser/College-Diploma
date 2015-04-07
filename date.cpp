//The implementation of the dateObject class

#include "stdafx.h"
#include "date.h"
#include <iostream>
#include <string>

using namespace std;

dateObject::dateObject()
{
	day = -1;
	year = -1;
	month = -1;
};
dateObject::dateObject(int pMonth, int pDay, int pYear)
{
	month = pMonth;
	day = pDay;
	year = pYear;
};

int dateObject::getDay()
{
	return day; //Returns the value of day
};

void dateObject::setDay(int setValue)
{
	day = setValue; //Sets day to the parameter value
};
int dateObject::getMonth()
{
	return month; //Returns the value of month
};

void dateObject::setMonth(int setValue)
{
	month = setValue; //Sets month to the parameter value
};

int dateObject::getYear()
{
	return year; //Returns the value of year
};

void dateObject::setYear(int setValue)
{
	year = setValue; //Sets year to the parameter value
};