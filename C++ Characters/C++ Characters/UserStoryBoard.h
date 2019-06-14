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

	// Switch state or ifthen
	// need cin function
	// need info out function

void Story()
{
	string name;
	string size;
	double speed;
	int hull;
	
	
	Vessel prefab1;
	Information(prefab1);
	
	
	cin >> name;
	cin >> speed;
	cin >> hull;

	Vessel prefab2{ prefab1 };
	prefab2.setClass(name);
	prefab2.setSpeed(speed);
	prefab2.setIntegrity(hull);

	Information(prefab2);
	
}
