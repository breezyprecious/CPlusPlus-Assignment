/**********************************************************************\
 * HealthProfile.h
 * HealthProfile class definition. This file represents HealthProfile's public
 * interface without revealing implementations of HealthProfile's member
 * functions, which are defined in HealthProfile.cpp
 *
 * Programming Assignment #2
 *
 * Name:        NYONG, PRECIOUS OKON
 * Reg. No:   	45309357GG
 * Department:  COMPUTER SCIENCE
 *
 */

#include <string>           // uses C++ string class
using namespace std;

// HealthProfile class definition
class HealthProfile
{
    // public attributes
public:
	 // constructor that initializes patient information
	HealthProfile (string firstName, string lastName, string gender, int month,
					int day, int year, int weight, double height, int currentDay,
					int currentMonth, int currentYear);
	
	void setFirstName(string firstName);   // function to set first name
	string getFirstName();                 // function to get first name
	
	void setLastName(string lastName);     // function to set last name
	string getLastName();                  // function to get last name
	
	void setGender(string gender);         // function to set gender
	string getGender();                    // function to get gender
	
	void setMonth(int month);              // function to set month of birth
	int getMonth();                        // function to get month of birth
	
	void setDay(int day);                  // function to set day of birth
	int getDay();                          // function to get day of birth
	
	void setYear(int year);                // function to set year of birth
	int getYear();                         // function to get year of birth
	
	void setHeight(double height);        // function to set patients height in meters
	double getHeight();                    // function to get patients height in meters
	
	void setWeight(int weight);            // function to set patients weight in kg
	int getWeight();                       // function to get patients weight in kg
	
	int setAge(int currentDay, int currentMonth, int currentYear);  // function to calculate age
    int getAge();                          // function to get patients age in years
	
    double getBMI();                       // function to calculate and return BMI
		
    int getMaximumHeartRate();             // function to calculate and return maximum heart rate
	
    double getTargetHeartRate();           // function to calculate and return target heart rate
    
    int getInformation();                  // function to print object information


    // private attributes
private:
    string firstName;               // variable to hold first name
    string lastName;                // variable to hold last name
    string gender;                  // variable to hold gender
    int month;                      // variable to hold month
    int day;                        // variable to hold day
    int year;                       // variable to hold year
    double height;                  // variable to hold height
    int weight;                     // variable to hold weight
    int age;                        // variable to hold age
    
}; // end class HealthProfile


