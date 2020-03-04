/*
    Name: Abdulbasid Guled
    Student Number: 156024184
    Section: SAA
    Due Date: June 7, 2019
    Workshop 4: In-Lab
*/

#ifndef _SICT_PASSENGER_H
#define _SICT_PASSENGER_H

namespace sict {

class Passenger {

    char p_Name[19];
    char p_Dest[19];

public:
    Passenger();
    Passenger(const char* p_name, const char* p_dest);
    bool isEmpty() const;
    void display() const;
    };  
}

#endif