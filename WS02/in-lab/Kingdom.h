/*
Name: Abdulbasid Guled 
Student Number: 156024184
Section: SAA
Due Date: May 24, 2019
Workshop 2: In_Lab
*/

#ifndef _sict_KINGDOM_H
#define _sict_KINGDOM_H

namespace sict {

struct Kingdom {
    char m_name[33];
    int m_population;    
};

    void display(const Kingdom& other);

}

#endif