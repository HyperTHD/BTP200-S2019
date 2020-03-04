/*
Name: Abdulbasid Guled
Student Number: 156024184
Email: aguled5@myseneca.ca
Due Date: July 19, 2019
Workshop 8: In-Lab
*/

#include <iostream>
#include <cstring>
#include "Account.h"

namespace sict 
{
    Account::Account(double balance)
    {
        if (balance > 0.0)
        {
            m_balance = balance;
        }
        else 
        {
            m_balance = 0.0;
        }
    }
    bool Account::credit(double balance)
    {
        bool valid;

        if (balance > 0.0)
        {
            m_balance += balance;
            valid = true;
        }
        else 
        {
            valid = false;
        }
        return valid;
    } 
    bool Account::debit(double balance)
    {
        bool valid;
        
        if (balance > 0.0)
        {
            m_balance -= balance;
            valid = true;
        }
        else 
        {
            valid = false;
        }
        return valid;
    }
    double Account::balance() const
    {
        return m_balance;
    }
   
}