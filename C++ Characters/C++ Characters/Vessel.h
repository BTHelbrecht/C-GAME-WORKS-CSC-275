/**************************************************************************************************************
 * VESSEL PARENT
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



// Namespaces
using namespace std;								// standard Library... cin, cout, etc.. AVOID Name Conflict



//*************************************************************************************************************
// CLASS
//*************************************************************************************************************
// Vessel Class
class Vessel
{
private:												// Private - Vessel Class
	//Variables
	string *vesselClass;								// hold vessel classes...Dreadnought, etc.
	double *vesselSpeed;								// hold vessel speed... suing mph at Mach speeds
	int *vesselIntegrity;								// holds vessels Health value

public:													// Public
	//Declaring Methods

	// Setters
	void setClass(string setClass);						// sets new string argument to class
	void setSpeed(double setSpeed);						// sets new double argument to speed
	void setIntegrity(int setIntegrity);				// sets new int argument to health

	// Getters
	string getClass();									// returns the class
	double getSpeed();									// returns the speed
	int getIntegrity();									// returns the health


	// Initializer Constructor - set defaults (None, Mach3, 100%)
	Vessel(string classValue = "None", double speedValue = 2283.62, int IntegrityValue = 100);


	// Copy Constructor
	Vessel(const Vessel &source);


	// Destructor
	~Vessel() { cout << "Destroying " << vesselClass << endl; }
};