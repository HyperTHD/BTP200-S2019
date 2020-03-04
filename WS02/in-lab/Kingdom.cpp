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
        cout << other.m_name << ", population" << other.m_population << endl; 
    }
}