/*
    Name: Abdulbasid Guled
    Student Number: 156024184
    Email: aguled5@myseneca.ca
    Due Date: August 4th, 2019
    Milestone 5
 */

#ifndef AID_PERISHABLE_H
#define AID_PERISHABLE_H
#include <iostream>
#include "Good.h"
#include "Date.h"

namespace aid
{
    class Perishable : public Good
    {
        Date date_expiry;

        public:
            Perishable();
            std::fstream& store(std::fstream& file, bool newLine = true) const;
            std::fstream& load(std::fstream& file);
            std::ostream& write(std::ostream& os, bool linear) const;
            std::istream& read(std::istream& is);
            const Date& expiry() const;
    };
    iGood* CreateProduct(char tag);
}

#endif