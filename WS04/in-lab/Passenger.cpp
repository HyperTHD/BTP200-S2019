/*
    Name: Abdulbasid Guled
    Student Number: 156024184
    Section: SAA
    Due Date: June 7, 2019
    Workshop 4: In-Lab
*/

#include "Passenger.h"
#include <iostream>

using namespace std;

namespace sict {

// Sets an object's data to an empty state.

Passenger::Passenger() {
        p_Name[0] = '\0';
        p_Dest[0] = '\0';
}

// Sets the objects data and validates the data. If the data is invalid, the object is set to an empty state.

Passenger::Passenger(const char* p_name, const char* p_dest) {

if (p_name == nullptr || p_dest == nullptr) {
    p_Name[0] = '\0';
    p_Dest[0] = '\0';
}
    else {
        for (int i = 0; i < 18; i++){
            p_Name[i] = p_name[i];
            p_Dest[i] = p_dest[i];
        }
        p_Name[18] = '\0';
        p_Dest[18] = '\0';
    }
}

// Checks for empty state. An object is empty if it's an empty string that can be referenced

bool Passenger::isEmpty() const {
    bool safe;

    if (p_Name[0] == '\0' || p_Dest[0] == '\0') {
        safe = true;
    } else {
        safe = false;
    }
        return safe;
}

// Displays information of the object if it's not in an empty state, otherwise, displays default message of No Passenger

void Passenger::display() const {

    if (isEmpty()) {
        cout << "No passenger!" << endl;
    }
        else {
            cout << p_Name << " - " << p_Dest << endl;
        }
    }
}
