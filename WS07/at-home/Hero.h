/*
    Name: Abdulbasid Guled 
    Student Number: 156024184
    Email: aguled5@myseneca.ca
    Due Date: July 12, 2019
    Workshop 7: At_Home
*/

#ifndef _SICT_HERO_H
#define _SICT_HERO_H

namespace sict 
{
    const int MAX_ROUNDS = 100;

    class Hero
    {
        char m_name[40];
        int m_health;
        int m_strength;
    public:
        Hero();
        Hero(const char*, int, int);
        void operator-=(int);
        bool isAlive() const;
        int attackStrength() const;
        friend std::ostream& operator<<(std::ostream&, const Hero&);
    };
    const Hero& operator*(const Hero& first, const Hero& second);
}
#endif