/*
ASSIGNMENT 3. QUESTION 3

Name: Nyong, Precious Okon
Reg. No: 45309357GG
Department: Department Of Computer Science
*/

#include <iostream>
#include <stdlib.h>
using namespace std;

//Variables declarations
int int1,  int2;
char char1, char2;
float float1, float2;

//function declartions (prototypes)
void floatVariables ();
void charVariables ();
void intVariables ();

//Template minimum function
template <class T>
void minimum ( T R1, T R2)
	{
		if ( R1 < R2)
		{
			cout <<endl << R1 << " is less than " <<R2 <<endl;
		}
		else if ( R1 == R2 )
		{
			cout <<endl << R1 << " is equal to " << R2 <<endl;
		}
		else
		{
			cout <<endl << R2 << " is less than " << R1 <<endl;
		}
	}

//This function recieves variables from the user and assigns them to the already declared global variables
void floatVariables ()
{
	cout << "\nTo compare two (2) 'floating point' variables.....";
	cout << "\nEnter the first float:";
	cin  >> float1;
	cout << "\nEnter the second float:";
	cin  >> float2;
}	

//This function recieves variables from the user and assigns them to the already declared global variables
void intVariables ()
{
	cout << "\nTo compare two (2) 'integers'.....";
	cout << "\nEnter the first integer:";
	cin  >> int1;
	cout << "\nEnter the second integer:";
	cin  >> int2;
}	
	
//This function recieves variables from the user and assigns them to the already declared global variables	
void charVariables ()
{
	cout << "\nTo compare two (2) 'characters'.....";
	cout << "\nEnter the first character:";
	cin  >> char1;
	cout << "\nEnter the second character:";
	cin  >> char2;
}

//The main function
int main ()
{
	int R;
	
	cout << "\nThis Program compares two variables and\ntells you which of the two is lower.";
	cout <<"\nChoose what types of variables you want to compare (eg. 2)";
	cout <<"\n1. Integer.\n2. Character.\n3. Float.\n( Enter 1, 2, or 3 )\n";
	cin  >> R;
	
	switch ( R )
	{
		case 1:
			intVariables ();
			minimum ( int1, int2);
			break;
			
		case 2:
			charVariables ();
			minimum ( char1, char2 );
			break;
			
		case 3:
			floatVariables ();
			minimum ( float1, float2 );
			break;
			
		default:
			cout << "\nWrong input!";
			break;
	}
	
	return 0;
}

