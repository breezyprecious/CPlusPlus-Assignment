/**********************************************************************\
 * HealthProfile.cpp
 * HealthProfile member-function definitions. This file contains
 * implementations of the member functions prototyped in HealthProfile.h
 *
 * Programming Assignment #2
 *
 * Name:        NYONG, PRECIOUS OKON
 * Reg. No:   	45309357GG
 * Department:  COMPUTER SCIENCE
 *
 */

#include <iostream>
#include <string>           // uses C++ string class
#include <math.h>           // uses C++ math class
#include <iomanip>          // used iomanip class to format output text
#include "HealthProfile.h"  // include definition of class HealthProfile
using namespace std;

// constructor initializes patient information
HealthProfile::HealthProfile(string firstName, string lastName, string gender, int month,
                             int day, int year, int weight, double height, int currentDay,
                             int currentMonth, int currentYear)
{
    setFirstName(firstName);      // call set function to initialize firstName
    setLastName(lastName);        // call set function to initialize lastName
    setGender(gender);            // call set function to initialize gender
    setMonth(month);              // call set function to initialize month
    setDay(day);                  // call set function to initialize day
    setYear(year);                // call set function to initialize year
    setWeight(weight);            // call set function to initialize weight
    setHeight(height);            // call set function to initialize height
    setAge(currentDay, currentMonth, currentYear);  // call set function to calculate age
}

// function to print object information
int HealthProfile::getInformation()
{
    cout << "\n\n\tHEALTH PROFILE FOR - " << getFirstName() << " " << getLastName() << endl;
    cout << " First Name: " << setw(18) << getFirstName() << endl;
    cout << " Last Name: " << setw(19) << getLastName() << endl;
    cout << " Gender: " << setw(20) << getGender() << endl;
    cout << " Date of Birth: " << setw(10) << getDay() << "/" << getMonth() << "/" << getYear() << endl;
    cout << " Weight (in kilograms): " << setw(3) << getWeight() << endl;
    cout << " Height (in meters): " << setw(7) << getHeight() << endl;
    cout << " Age: " << setw(21) << getAge() << " year(s)" << endl;
    cout << " Body Mass Index (BMI): " << setw(8) << getBMI() << endl;
    cout << " Maximum Heart Rate: " << setw(7) << getMaximumHeartRate() << endl;
    cout << " Target Heart Rate: " << setw(8) << getTargetHeartRate() << endl;
    cout << "\n\tBMI VALUES CHART" << endl;
    cout << "\tUnderweight:   less than 18.5" << endl;
    cout << "\tNormal:        between 18.5 and 24.9" << endl;;
    cout << "\tOverweight:    between 25 and 29.9" << endl;
    cout << "\tObese:         30 or greater\n\n" << endl;
}


// implementaion details for functions in HealthProfile.h

void HealthProfile::setFirstName(string firstN)
{
	firstName = firstN;
}

string HealthProfile::getFirstName()
{
	return firstName;
}

void HealthProfile::setLastName(string lastN)
{
	lastName = lastN;
}

string HealthProfile::getLastName()
{
	return lastName;
}

void HealthProfile::setGender(string sex)
{
	// print readable gender
	if(sex == "M" || sex == "m"){
		gender = "Male";
	}
	else if(sex == "F" || sex == "f"){
		gender = "Female";
	}
	else{
		gender = "N/A";
	}
}

string HealthProfile::getGender()
{
	return gender;
}

void HealthProfile::setMonth(int mth)
{
	month = mth;
}

int HealthProfile::getMonth()
{
	return month;
}

void HealthProfile::setDay(int dy)
{
	day = dy;
}

int HealthProfile::getDay()
{
	return day;
}

void HealthProfile::setYear(int yr)
{
	year = yr;
}

int HealthProfile::getYear()
{
	return year;
}

void HealthProfile::setHeight(double hgt)
{
	height = hgt;
}

double HealthProfile::getHeight()
{
	return height;
}

void HealthProfile::setWeight(int wgt)
{
	weight = wgt;
}

int HealthProfile::getWeight()
{
	return weight;
}


int HealthProfile::setAge(int cMonth, int cDay, int cYear)
{
	int offset = 0;
	
	// decide if the birthday (this year) has passed
	if (getMonth() > cMonth) offset = -1;
	if ((getMonth() == cMonth) && (getDay() > cDay)) offset  = -1;
	age = (cYear - getYear() + offset);	
}

int HealthProfile::getAge()
{
	return age;
}


int HealthProfile::getMaximumHeartRate()
{
	return (220 - getAge());
}

double HealthProfile::getTargetHeartRate()
{
	int max;
	max = getMaximumHeartRate();
	
	double rate1, rate2;
	
	rate1 = max * 50 / 100;
	rate2 = max * 85 / 100;
	return (rate1-rate2);
}

double HealthProfile::getBMI()
{
	return (weight / (height * height));
}





