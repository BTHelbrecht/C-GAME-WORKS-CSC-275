/*
 * MAIN FILE
 * This is for game space ships.
 * 2019
 * 1.0
 */



//*************************************************************************************************************
// UTILITIES
//*************************************************************************************************************
// Libraries
#include <iostream>										// using in/out streams
#include <vector>										// using Vectors... as lists... in place of arrays
#include <string>										// using strings for variable types


// Namespaces
using namespace std;									// standard Library... cin, cout, etc.. AVOID Name Conflict



//*************************************************************************************************************
// CLASS
//*************************************************************************************************************
// Vessel Class
class Vessel
{
private:												// Private - Vessel Class
	//Variables
	string *vesselClass;									// hold vessel classes...Dreadnought, etc.
	double *vesselSpeed;									// hold vessel speed... suing mph at Mach speeds
	int *vesselIntegrity;								// Holds vessels Health value

public:													// Public
	// Methods
	string GetClass() { return *vesselClass; }			// returns the class
	double GetSpeed() { return *vesselSpeed; }			// returns the speed
	int GetIntegrity() { return *vesselIntegrity; }		// returns the health


	// Initializer Constructor
	Vessel(string classValue = "None", double speedValue = 2283.62, int IntegrityValue = 100);


	// Copy Constructor
	Vessel(const Vessel &source);


	// Destructor
	~Vessel() { cout << "Destroying " << vesselClass << endl; }
};

// Initializer Constructor Method (looks for - string, double, or int)
	// Initializes values of class, speed, and health
Vessel::Vessel(string classValue, double speedValue, int IntegrityValue)
{
	vesselClass = new string;
	*vesselClass = classValue;

	vesselSpeed = new double;
	*vesselSpeed = speedValue;

	vesselIntegrity = new int;
	*vesselIntegrity = IntegrityValue;
}

// Copy Constructor Method (Reference to Vessel Class ti instantiate a copy of Vessels attributes)
	// Initializes values of class, speed, health
Vessel::Vessel(const Vessel &source)
{
	vesselClass = new string;
	*vesselClass = *source.vesselClass;

	vesselSpeed = new double;
	*vesselSpeed = *source.vesselSpeed;

	vesselIntegrity = new int;
	*vesselIntegrity = *source.vesselIntegrity;
}



//*************************************************************************************************************
// Methods
//*************************************************************************************************************
// temp???
void Information(Vessel vessel)
{
	cout << "Class " << vessel.GetClass() << endl;
	cout << "Speed " << vessel.GetSpeed() << endl;
	cout << "Hull Integrity " << vessel.GetIntegrity() << endl;
}



//*************************************************************************************************************
// Main 
//*************************************************************************************************************
int main()
{
	string name;
	double speed;
	int hull;
	
	cin >> name;
	cin >> speed;
	cin >> hull;

	Vessel temp = {name, speed, hull};

	Information(temp);
	Information(temp);

	cin >> name;
	cin >> speed;
	cin >> hull;

	temp.GetClass(name);
	Vessel prefab{ temp };
	

	system("Pause");
}
	
