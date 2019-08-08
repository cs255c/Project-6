/* Header file for Rational class
 * 3/6/2015
 * Alex Debrecht */

#ifndef RATIONAL_H_
#define RATIONAL_H_
#include <string>

class Rational {

	// numerator and denominator are private, as well as the method to reduce all fractions
	int numerator;
	int denominator;
	void reduce();
	int gcf(int,int);

	// Addition, subtraction, multiplication, division, and fraction and floating point print are public
public:
	// Constructor + destructor
	Rational(int numerator = 0, int denominator = 1); // Constructor defaults to 0/1
	~Rational();
	// Methods
	void add(Rational);
	void subtract(Rational);
	void multiply(Rational);
	void divide(Rational);
	void reciprocal();
	void negate();
	void print();
	void printFloat();

};

#endif /* RATIONAL_H_ */
