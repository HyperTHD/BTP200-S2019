/*
Name: Abdulbasid Guled
Student Number: 156024184
Email: aguled5@myseneca.ca
Due Date: July 23, 2019
Workshop 8: At-Home
*/


#ifndef SICT_CHEQUINGACCOUNT_H
#define SICT_CHEQUINGACCOUNT_H
#include <iostream>
#include "Account.h"

namespace sict 
{
    class ChequingAccount : public Account
    {
        double m_trans;
        double m_monthFee;

        public:
            ChequingAccount(double, double, double);
            bool credit(double);
            bool debit(double);
            void monthEnd();
            void display(std::ostream&) const;
    };

}


#endif