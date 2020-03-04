/*
    Name: Abdulbasid Guled
    Student Number: 156024184
    Section: SAA
    Due Date: June 11, 2019
    Workshop 4: At-Home
*/

#ifndef _SICT_PASSENGER_H
#define _SICT_PASSENGER_H

namespace sict {

class Passenger {

    char p_Name[19];
    char p_Dest[19];

    int m_year;
    int m_month;
    int m_day;

public:
    Passenger();
    Passenger(const char* p_name, const char* p_dest);
    Passenger(const char* name, const char* destination, int year, int month, int day);
    const char* name() const;
    bool canTravelWith(const Passenger& person) const;
    bool isEmpty() const;
    void display() const;
    };  
}

#endif