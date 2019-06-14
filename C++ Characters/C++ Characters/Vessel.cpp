/**************************************************************************************************************
 * VESSEL CPP
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
#include "Vessel.h"


// Namespaces
using namespace std;								// standard Library... cin, cout, etc.. AVOID Name Conflict


//*************************************************************************************************************
// METHODS
//*************************************************************************************************************
// Setters
void Vessel::setName(string setName) { *vesselName = setName; }
void Vessel::setClass(string setClass) { *vesselClass = setClass; }					// sets new string argument to class
void Vessel::setSpeed(double setSpeed) { *vesselSpeed = setSpeed; }					// sets new double argument to speed
void Vessel::setIntegrity(int setIntegrity) { *vesselIntegrity = setIntegrity; }	// sets new int argument to health

// Getters
string Vessel::getName() { return *vesselName; }
string Vessel::getClass() { return *vesselClass; }									// returns the class
double Vessel::getSpeed() { return *vesselSpeed; }									// returns the speed
int Vessel::getIntegrity() { return *vesselIntegrity; }								// returns the health


// Initializer Constructor Method (looks for - string, double, or int)
	// Initializes values of class, speed, and health
Vessel::Vessel(string nameValue, string classValue, double speedValue, int IntegrityValue)
{
	vesselName = new string;
	*vesselName = nameValue;

	vesselClass = new string;						// class string equal to new string
	*vesselClass = classValue;						// point new variable to class

	vesselSpeed = new double;						// speed double equal to new double
	*vesselSpeed = speedValue;						// point new variable to speed

	vesselIntegrity = new int;						// health int equal to new int
	*vesselIntegrity = IntegrityValue;				// point new variable to health
}


// Copy Constructor Method (Reference to Vessel Class ti instantiate a copy of Vessels attributes)
	// Initializes values of class, speed, health
Vessel::Vessel(const Vessel &source)
{
	vesselName = new string;
	*vesselName = *source.vesselName;

	vesselClass = new string;						// class string equal to new string
	*vesselClass = *source.vesselClass;				// reference class to new variable

	vesselSpeed = new double;						// speed double equal to new double
	*vesselSpeed = *source.vesselSpeed;				// reference speed to new variable

	vesselIntegrity = new int;						// health int equal to new int
	*vesselIntegrity = *source.vesselIntegrity;		// reference health to new variable
}