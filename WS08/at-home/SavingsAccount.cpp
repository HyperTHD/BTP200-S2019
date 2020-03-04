/*
Name: Abdulbasid Guled
Student Number: 156024184
Email: aguled5@myseneca.ca
Due Date: July 23, 2019
Workshop 8: At-Home
*/

#include <iostream>
#include <iomanip>
#include "Account.h"
#include "SavingsAccount.h"

namespace sict
{
    SavingsAccount::SavingsAccount(double balance, double interest) : Account (balance)
    {
        if (interest > 0)
        {
            m_Interest = interest;
        }
        else
        {
            m_Interest = 0.0;
        }
        
    }
    void SavingsAccount::monthEnd() 
    {
        double monthEnd = balance() * m_Interest;
        credit(monthEnd);
    }
    void SavingsAccount::display(std::ostream& os) const
    {
        os << "Account type: Savings" << std::endl;
        os << "Balance: $" << std::fixed << std::setprecision(2) << balance() << std::endl;;
        os << "Interest Rate (%): " << std::fixed << std::setprecision(2) << m_Interest * 100 << std::endl;
    }
    
}