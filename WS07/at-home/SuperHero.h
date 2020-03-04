/*
    Name: Abdulbasid Guled 
    Student Number: 156024184
    Email: aguled5@myseneca.ca
    Due Date: July 12, 2019
    Workshop 7: At_Home
*/

#ifndef _SICT_SUPERHERO_H
#define _SICT_SUPERHERO_H
#include <iostream>
#include "Hero.h"

namespace sict 
{
    class SuperHero : public Hero
    {
        int m_superBonus;
        int m_defense;

        public:
            SuperHero();
            SuperHero(const char*, int, int, int, int);
            int attackStrength() const;
            int defend() const;
    };
    const SuperHero& operator*(const SuperHero& first, const SuperHero& second);
}
#endif