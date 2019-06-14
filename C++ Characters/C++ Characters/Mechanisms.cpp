/**************************************************************************************************************
 * MECHANISM CPP
 * This is for game space ships.
 * 2019
 * 1.0
 *************************************************************************************************************/


//*************************************************************************************************************
// UTILITIES
//*************************************************************************************************************
// Libraries
#include <iostream>									// using in/out streams
#include <vector>									// using Vectors... as lists... in place of arrays
#include <string>									// using strings for variable types
#include "Mechanisms.h"



// Namespaces
using namespace std;								// standard Library... cin, cout, etc.. AVOID Name Conflict



//*************************************************************************************************************
// Methods
//*************************************************************************************************************
// Print Temp
void Information(Vessel vessel)
{
	cout << "Class " << vessel.getClass() << endl;
	cout << "Speed " << vessel.getSpeed() << endl;
	cout << "Hull Integrity " << vessel.getIntegrity() << endl;
}

int userInputNumber()
{
	int temp;
	cin >> temp;
	return temp;
}




//*************************************************************************************************************
// MECHANISMS CLASS  - - - Under Construction
//*************************************************************************************************************
/*
void Mechanisms::setUserString(string setString) { userInString = setString; }
void Mechanisms::setUserDouble(double setDouble) { userInDouble = setDouble; }
void Mechanisms::setUserInt(int setInt) { userInInt = setInt; }

string Mechanisms::getUserString() { return userInString; }									// returns the class
double Mechanisms::getUserDouble() { return userInDouble; }									// returns the speed
int Mechanisms::getUserInt() { return userInInt; }



// Initializer Constructor
Mechanisms::Mechanisms()
{
}



Mechanisms::~Mechanisms()
{
}
*/
