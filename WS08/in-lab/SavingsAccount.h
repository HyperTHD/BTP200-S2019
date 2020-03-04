/*
Name: Abdulbasid Guled
Student Number: 156024184
Email: aguled5@myseneca.ca
Due Date: July 19, 2019
Workshop 8: In-Lab
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