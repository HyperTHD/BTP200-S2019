/*
    Name: Abdulbasid Guled
    Student Number: 156024184
    Email: aguled5@myseneca.ca
    Due Date: August 4th, 2019
    Milestone 5
 */
#include <iostream>
#include <fstream>
#include "Perishable.h"

namespace aid
{
    Perishable::Perishable() : Good('P'){}

    std::fstream& Perishable::store(std::fstream& file, bool newline) const
    {
        Good::store(file, false);
        file << "," << date_expiry << std::endl;
        return file;
    }

    std::fstream& Perishable::load(std::fstream& file)
    {
        Good::load(file);
        date_expiry.read(file);
        file.ignore();
        return file;
    }

    std::ostream& Perishable::write(std::ostream& os, bool linear) const
    {
        Good::write(os, linear);

        if (isClear() && !isEmpty())
        {
            if (linear)
            {
                date_expiry.write(os);
            }
            else 
            {
                std::cout << "\n Expiry date: ";
                date_expiry.write(os);
            }
        }
        return os;
    }

    std::istream& Perishable::read(std::istream& is)
    {
        is.clear();
        Good::read(is);

            if (isClear())
            {
                std::cout << " Expiry date (YYYY/MM/DD): ";
                is >> date_expiry;
            }

            if (date_expiry.errCode() == CIN_FAILED)
            {
                message("Invalid Date Entry");
            }
            if (date_expiry.errCode() == YEAR_ERROR)
            {
                message("Invalid Year in Date Entry");
            }
            if (date_expiry.errCode() == MON_ERROR)
            {
                message("Invalid Month in Date Entry");
            }
            if (date_expiry.errCode() == DAY_ERROR)
            {
                message("Invalid Day in Date Entry");
            }
            if (date_expiry.errCode() == PAST_ERROR)
            {
                message("Invalid Expiry in Date Entry");
            }
            if (date_expiry.errCode())
            {
                is.setstate(std::ios::failbit);
            }
        return is;
    }

    const Date& Perishable::expiry() const
    {
        return date_expiry;
    }

    iGood* CreateProduct(char tag)
    {
        iGood* product = nullptr;

        if (tag == 'N' || tag == 'n')
        {
            product = new Good();
        }
        else if (tag == 'P' || tag == 'p')
        {
            product = new Perishable();
        }
        return product;
    }

}