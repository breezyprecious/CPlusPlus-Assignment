/*
ASSIGNMENT 3. QUESTION 3

Name: Chiaka Princewill Samuel
Reg. No: 47037451EG
Department: Department Of Computer Science
*/

#include <stdlib.h>
#include <iostream>
using namespace std;

//functions declarations
void hanoi ( int, char, char, char );

//Implementation for void displaySteps (); function
void hanoi ( int num, char a, char b, char c )
{
	if ( num > 0)
	{
			hanoi ( num -1, a, c, b );
			cout << "Move a disk from " << a << " to " << c << "\n";
			hanoi ( num -1, b, c, a );
	}
	return;
}


//Program execution begins here
int main ()
{
//local variables declarations
	int N; char S, T, D;
	S = 'S';
	T = 'T';
	D = 'D';
	
//Receiving inputes from user
	cout << "\nWelcome!...\nThis Program will help you solve\nThe Towers of Hanoi Puzzle for any number of Disks";
	cout << "\n\nTower Labels.............";
	cout << "\nSource Tower = S\nTemporary Tower = T\nDestination Tower = D";
	cout << "\nHow many disks are on tower the source tower ?:\n";
	cin  >> N;
	cout << "\nFollow the step(s)...\n";
	
//Transfering control to appropriate functionw
	hanoi ( N, S, T, D);		//Calling 'displaySteps' function
	
	return 0;
}


