/*
	Name: Abdulbasid Guled
	Student Number: 156024184
	Email: aguled5@myseneca.ca
	Due Date: June 14, 2019
	Section: SAA
	Workshop: 5_In_Lab
*/

#ifndef _SICT_FRACTION_H
#define _SICT_FRACTION_H

namespace sict {
	class Fraction { 
		int numerator;
		int denominator;

		int max() const;
		int min() const;
		void reduce();
		int gcd() const;
	public:
		Fraction();
		Fraction(int numerator, int denominator);
		bool isEmpty() const;
		void display() const;
		Fraction operator+(const Fraction& rhs) const;
		Fraction operator*(const Fraction& rhs) const;
		bool operator==(const Fraction& rhs) const;
		bool operator!=(const Fraction& rhs) const;
		Fraction& operator+=(const Fraction& rhs) ;
	};
}

#endif