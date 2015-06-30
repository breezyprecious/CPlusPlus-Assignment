/*
ASSIGNMENT 3. QUESTION 3

Name: Chiaka Princewill Samuel
Reg. No: 47037451EG
Department: Department Of Computer Science
*/
#include <iostream>
#include <stdlib.h>
#include <ctime>
using namespace std;

int select, number, guess, count, lim;

void choose ();		//Enbles the user to set the range for the numbers
void decide ();		//Recieves inputs from the user
void quit ();		//Exits the program or repeats the whole proccess


//Implementation for "void decide ();" function
void decide ()
{
	cout << "\nGuess!" << "\nEnter a number ranging from 0 TO " << lim << endl;
	count = 1;
	
	while ( guess != number )
	{
			cin >> guess;
			
			if ( guess < number )
			{
				cout << "\nToo Low!\n";
			}
			else if ( guess > number )
			{
				cout << "\nToo High!\n";
			}
			else
			{
				break;
			}
			
			count ++;
			
	}
	
	cout << "\n Congratulation!\nThe number was " << number << ".\nYou guessed the number in " << count << " trial(s)";
	
	if ( count < lim )
	{
			cout << "\nYou Know the Secret!";
	}
	else
	{
	cout << "\nYou can do beter.";
	}
		
	return;
				
}

void choose ()
{
	cout << "\nChoose the range of numbers you want to guess from: ";
	cout << "\n1. 0 TO 10\n2. 0 TO 100\n3. 0 TO 1000\n(ENTER 1,2 or 3\nselect: )";
	cin >> select;
	
	switch ( select )
	{
		case 1:
			limit = 10;
			number = rand () % 11 ;
			break;
			
		case 2:
			limit = 100;
			number = rand () % 101;
			break;
			
		case 3:
			limit = 100;
			number = rand () % 1001;
			break;
			
		default:
			cout << "\nInvalid Input! Try Again\n";
			choose ();
			break;
	}
	return;
	
}

//Program execution begins here
int main ()
{
	srand ( time ( 0 ) );
	cout << "Welcome to Guess The Number Game \n";
	choose ();	//Calling setRange function
	decide ();	//Calling getGuess funcion
	
	return 0;
}


