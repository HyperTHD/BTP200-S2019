/*
	Name: Abdulbasid Guled
	Student Number: 156024184
	Email: aguled5@myseneca.ca
	Due Date: June 14, 2019
	Section: SAA
	Workshop: 5_In_Lab
*/

#include "Fraction.h"
#include <iostream>

using namespace std;

namespace sict {
 
    Fraction::Fraction() {
      
        numerator = 0;
        denominator = 1;
    }
    
    Fraction::Fraction(int top, int bottom) {
        
        if (top <= 0 && bottom < 0) {
            *this = Fraction();
        }
        else {
            numerator = top;
            denominator = bottom;
            reduce();
        }
    }
    
    int Fraction::max() const {
        
        int max;

        if (numerator > denominator) {
            max = numerator;
        }
        else {
            max = denominator;
        }
        return max;
    }

    int Fraction::min() const {

        int min;

        if (numerator < denominator) {
            min = numerator;
        }
        else {
            min = denominator;
        }
        return min;
    }

    void Fraction::reduce() {

        int GCD = gcd();

        numerator /= GCD;
        denominator /= GCD;

    }
 
    int Fraction::gcd() const {
        int mn = min();  // min of numerator and denominator
        int mx = max();  // max of numerator and denominator
        int g_c_d = 1;
        bool found = false;

        for (int x = mn; !found && x > 0; --x) { // from mn decrement until divisor found
            if (mx % x == 0 && mn % x == 0) {
                found = true;
                g_c_d = x;
            }
        }
        return g_c_d;
    }

    bool Fraction::isEmpty() const {

        bool empty;

        if (numerator <= 0 && denominator > 0) {
            empty = true;
        }
        else {
            empty = false;
        }
        return empty;
    }

    void Fraction::display() const {
       
        if (isEmpty()) {
            cout << "no fraction stored" << endl;
        }
        else if (denominator == 1) {
            cout << numerator << endl;
        }
        else {
            cout << numerator << "/" << denominator << endl;
        }
    }

    Fraction Fraction::operator+(const Fraction& rhs) const {

        Fraction result;

        if (this->isEmpty() == false && rhs.isEmpty() == false) {
            result.numerator = (this->numerator * rhs.denominator) + (this->denominator * rhs.numerator); 
            result.denominator = (this->denominator * rhs.denominator);
        }
        else {
            result = Fraction();
        }
        return result;
    }
}