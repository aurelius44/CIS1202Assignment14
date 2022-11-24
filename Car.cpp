#include "Car.h"
#include "Vehicle.h"

#include<iostream>

using namespace std;

Car::Car():Vehicle() {
	doorNum = 0;
}

Car::Car(string manu, double year, int doors) : doorNum(doors), Vehicle(manu, year)
{
	doorNum = doors;
}

int Car::getDoors() {
	return doorNum;
}

void Car::setDoors(int doors) {
	doorNum = doors;
}

void Car::displayInfo() {
	Vehicle::displayInfo();
	cout << "Number of Doors: " << getDoors() << endl;
}
