#include <iostream>
#include <cmath>
using namespace std;

int main()
{

/* Aaron Shehan
This program will take user inputs for Initial Velocity and Final Velocity and use those inputs to output a value for Vertical Drop in meters and feet. */

double const Gravity = 9.8; 		//Acceleration constant due to gravity
double const Feet_conversion = 3.28; 	//For converting meters to feet
double velocityInitial = 0; 		//For Initial Velocity
double velocityFinal = 0; 		//For Final Velocity

cout << "Enter the initial velocity at top of hill in m/s: ";
cin >> velocityInitial; 
cout << "Enter the final velocity at bottom of hill in m/s: ";
cin >> velocityFinal;

double verticalDrop = 0; //For relative vertical drop

verticalDrop = (pow(velocityFinal, 2) - pow(velocityInitial, 2)) / (2 * Gravity); //Uses user input for initial and final velocity to calculate value of vertical drop

cout << "The relative vertical drop of this roller coaster is ";
cout << verticalDrop << " meters or ";
cout << verticalDrop * Feet_conversion;
cout << " feet." << endl;

return 0;
}
