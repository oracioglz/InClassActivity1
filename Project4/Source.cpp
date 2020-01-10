// Oracio Gonzalez 
// This is my own work 
// In class activity 1-8-20

#include <iostream>
#include <cmath>

using namespace std; 



int main() {

	int side;
	double area;
	cout << "This program will compute the area of a hexagon for any given measure of its sides .\n";
	cout << "Please enter the side of the hexagon: ";
	cin >> side;
	area = 3 * sqrt(3) / 2 * pow(side, 2.0);
	cout << "The area of the hexagon is: " << area << '\n';
	system("pause");

	/*double lb, kg;
	cout << "This program converts Pounds to Kilograms .\n";
	cout << "please enter weight in Pounds: ";
	cin >> lb;
	kg = lb / 2.2;
	cout << "The weight in kilograms is: " << kg << '\n';
	system("pause");
	*/

	/*int num1, num2;
	cout << "This program will ask you to pick two numbers then the program will display the larger number .\n";
	cout << "Please enter the first value here: ";
	cin >> num1;
	cout << "Please enter the second value here: ";
	cin >> num2;
	if (num1 > num2) {
		cout << "num1 is greater!: " << num1 << '\n';
	}

		if (num2 > num1) {
				cout << "num2 is greater!: " << num2 << '\n';
		}
	return 0;
}