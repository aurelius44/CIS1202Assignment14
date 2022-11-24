#include "Vehicle.h"

#include<iostream>

using namespace std;

Vehicle::Vehicle() {
	manufact = "";
	yearOfModel = 0;
}

Vehicle::Vehicle(string manufacturer, double year) {
	manufact = manufacturer;
	yearOfModel = year;
}

void Vehicle::displayInfo() {
	cout << "Vehicle Information:" << endl;
	cout << "Vehicle Manufacturer: " << getManu() << endl;
	cout << "Year of Manufacture: " << getYear() << endl;
}

string Vehicle::getManu() {
	return manufact;
}

void Vehicle::setManu(string manufacturer) {
	manufact = manufacturer;
}

double Vehicle::getYear() {
	return yearOfModel;
}

void Vehicle::setYear(double year) {
	yearOfModel = year;
}