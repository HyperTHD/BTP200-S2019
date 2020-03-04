/*
Name: Abdulbasid Guled
Student Number: 156024184
Email: aguled5@myseneca.ca
Due Date: July 23, 2019
Workshop 8: At-Home
*/

#include <iostream>
#include <cstring>
#include "SavingsAccount.h"
#include "ChequingAccount.h"

namespace sict 
{
    const double rate = 0.05;
    const double transactionFee = 0.50;
    const double monthlyFee = 2.00;

    iAccount* CreateAccount(const char* type, double balance)
    {
        iAccount* account = nullptr;

        if (type[0] == 'S')
        {
            account = new SavingsAccount(balance, rate); 
        }
        else if (type[0] == 'C')
        {
            account = new ChequingAccount(balance, transactionFee, monthlyFee);
        }
        return account;
    }
}