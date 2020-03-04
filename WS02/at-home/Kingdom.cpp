/*
Name: Abdulbasid Guled
Student Number: 156024184
Section: SAA
Due Date: May 24, 2019
Workshop 2: In_Lab
*/

#include "Kingdom.h"
#include <iostream>
using namespace std;

namespace sict {

/*
    This function simply displays the data of the Kingdom object in the order mentioned in the workshop docx
    @param: Kingdom reference
*/
    void display(const Kingdom& other) {
        cout << other.m_name << ", population " << other.m_population << endl; 
    }

    void display(const struct Kingdom* kingArray, int size) {
        
        int maxPeople = 0;

        cout << "------------------------------" << endl;
        cout << "Kingdoms of SICT" << endl;
        cout << "------------------------------" << endl;

        for(int i = size - 1; i >= 0; i--) {
            cout << i + 1 << ". " << kingArray[i].m_name << ", population " << kingArray[i].m_population << endl; 
            maxPeople += kingArray[i].m_population;
        }
        cout << "------------------------------" << endl;
        cout << "Total population of SICT: " << maxPeople << endl;
        cout << "------------------------------" << endl;
    }
}