/*
Name: Abdulbasid Guled
Student Number: 156024184
Email: aguled5@myseneca.ca
Due Date: July 23, 2019
Workshop 8: At-Home
*/

#ifndef _SICT_SAVINGSACCOUNT_H
#define _SICT_SAVINGSACCOUNT_H
#include "Account.h"
#include <iostream>

namespace sict
{
    class SavingsAccount : public Account
    {
        double m_Interest;
        
        public:
            SavingsAccount(double, double);
            void monthEnd();
            void display(std::ostream&) const;
    };
}

#endif