/*
Name: Abdulbasid Guled
Student Number: 156024184
Email: aguled5@myseneca.ca
Due Date: July 19, 2019
Workshop 8: In-Lab
*/

#ifndef _SICT_IACCOUNT_H
#define _SICT_IACCOUNT_H

namespace sict 
{
    class iAccount
    {
        public:
            virtual ~iAccount(){};
            virtual bool credit(double) = 0;
            virtual bool debit(double) = 0;
            virtual void monthEnd() = 0;
            virtual void display(std::ostream&) const = 0;
    };
    iAccount* CreateAccount(const char*, double);
}

#endif