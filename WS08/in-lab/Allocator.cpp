/*
Name: Abdulbasid Guled
Student Number: 156024184
Email: aguled5@myseneca.ca
Due Date: July 19, 2019
Workshop 8: In-Lab
*/

#include <iostream>
#include <cstring>
#include "SavingsAccount.h"

namespace sict 
{
    const double rate = 0.05;

    iAccount* CreateAccount(const char* type, double balance)
    {
        iAccount* account = nullptr;

        if (type[0] == 'S')
        {
            account = new SavingsAccount(balance, rate); 
        }
        return account;
    }
}