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






Mechanisms::Mechanisms()
{
}


Mechanisms::~Mechanisms()
{
}
