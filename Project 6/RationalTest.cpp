/* Test the Rational class
 * 3/6/2015
 * Alex Debrecht */

#include <iostream>
#include "Rational.h"
using namespace std;

// function main begins program execution
int main() {

	// Declare variables
	int num1;
	int denom1;
	int num2;
	int denom2;
	bool ans = true;
	char ansChar;

	// Loop if user wants to test with multiple numbers
	while (ans) {

		// Ask user for rational numbers (numerators and denominators)
		cout << "Enter the numerator of the first fraction." << endl;
		cin >> num1;
		cout << "Enter the denominator of the first fraction." << endl;
		cin >> denom1;
		cout << "Enter the numerator of the second fraction." << endl;
		cin >> num2;
		cout << "Enter the denominator of the second fraction." << endl;
		cin >> denom2;

		// Declare and initialize rationals
		Rational frac = Rational(num1,denom1);
		Rational frac2 = Rational(num2,denom2);
		Rational extra;

		// Save original value of frac for restoring after math
		extra = frac;
		// Add frac2 to frac and print
		frac.print();
		cout << " + ";
		frac2.print();
		cout << " = ";
		frac.add(frac2);
		frac.print();
		cout << " = ";
		frac.printFloat();
		cout << endl;
		frac = extra;

		// Subtract frac2 from frac and print
		frac.print();
		cout << " - ";
		frac2.print();
		cout << " = ";
		frac.subtract(frac2);
		frac.print();
		cout << " = ";
		frac.printFloat();
		cout << endl;
		frac = extra;

		// Multiply frac by frac2 and print
		frac.print();
		cout << " * ";
		frac2.print();
		cout << " = ";
		frac.multiply(frac2);
		frac.print();
		cout << " = ";
		frac.printFloat();
		cout << endl;
		frac = extra;

		// Divide frac by frac2 and print
		frac.print();
		cout << " / ";
		frac2.print();
		cout << " = ";
		frac.divide(frac2);
		frac.print();
		cout << " = ";
		frac.printFloat();
		cout << endl;
		frac = extra;

		// Negate frac
		cout << "-(";
		frac.print();
		cout << ") = ";
		frac.negate();
		frac.print();
		cout << " = ";
		frac.printFloat();
		cout << endl;
		frac = extra;

		// Take reciprocal of frac
		cout << "1 / ";
		frac.print();
		cout << " = ";
		frac.reciprocal();
		frac.print();
		cout << " = ";
		frac.printFloat();
		cout << endl;
		frac = extra;

		// Ask user if they would like to loop again
		cout << "Would you like to test more fractions?" << endl;
		cin >> ansChar;

		// Set boolean based on answer
		if (ansChar == 'n' || ansChar == 'N') ans = false;

	}
}
