/**************************************************************************************************************
 * MAIN FILE
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
// Main 
//*************************************************************************************************************
int main()
{
	// Switch state or ifthen
	// need cin function
	// need info out function
	string name;
	double speed;
	int hull;
	
	cin >> name;
	cin >> speed;
	cin >> hull;

	Vessel prefab1 = {name, speed, hull};
	Information(prefab1);

	cin >> name;
	cin >> speed;
	cin >> hull;

	Vessel prefab2{ prefab1 };
	prefab2.setClass(name);
	prefab2.setSpeed(speed);
	prefab2.setIntegrity(hull);

	Information(prefab2);

	system("Pause");
}

