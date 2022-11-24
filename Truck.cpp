#include "Vehicle.h"
#include "Truck.h"

#include<iostream>

using namespace std;

Truck::Truck() : Vehicle() {
	capacity = 0;
}

Truck::Truck(string manu, double year, double cap) : capacity(cap), Vehicle(manu, year)
{
	capacity = cap;
}

double Truck::getCap() {
	return capacity;
}

void Truck::setCap(double cap) {
	capacity = cap;
}

void Truck::displayInfo() {
	Vehicle::displayInfo();
	cout << "Towing Capacity: " << getCap() << endl;
}