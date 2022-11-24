// Mark Middleton
// CIS 1202 501
// November 21, 2022

#include<iostream>
#include"Vehicle.h"
#include"Car.h"
#include"Truck.h"

using namespace std;

int main() {
	string manufact;
	double year;
	int doors;
	double capacity;

	cout << "Vehicle Program" << endl;
	cout << "\nVehicle:" << endl;
	cout << "Enter the manufacturer: " << endl;
	getline(cin, manufact);
	cout << "Enter the year built: " << endl;
	cin >> year;

	Vehicle auto1(manufact, year);
	auto1.displayInfo();

	cin.ignore(100, '\n');

	cout << "\nCar: " << endl;
	cout << "Enter the manufacturer: " << endl;
	getline(cin, manufact);
	cout << "Enter the year built: " << endl;
	cin >> year;
	cout << "Enter the number of doors: " << endl;
	cin >> doors;

	Car car1(manufact, year, doors);
	car1.displayInfo();

	cin.ignore(100, '\n');

	cout << "\nTruck: " << endl;
	cout << "Enter the manufacturer: " << endl;
	getline(cin, manufact);
	cout << "Enter the year built: " << endl;
	cin >> year;
	cout << "Enter the towing capacity: " << endl;
	cin >> capacity;

	Truck truck1(manufact, year, capacity);
	truck1.displayInfo();

	return 0;
}