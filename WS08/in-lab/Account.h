/*
Name: Abdulbasid Guled
Student Number: 156024184
Email: aguled5@myseneca.ca
Due Date: July 19, 2019
Workshop 8: In-Lab
*/

#ifndef _SICT_ACCOUNT_H
#define _SICT_ACCOUNT_H
#include "iAccount.h"

namespace sict
{
    class Account : public iAccount
    {
        double m_balance;

        public:
            Account(double);
            bool credit(double);
            bool debit(double);
        protected:
            double balance() const;
    };
    iAccount* CreateAccount(const char*, double);
}

#endif