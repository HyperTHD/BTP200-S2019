#ifndef _sict_CRA_ACCOUNT_H
#define _sict_CRA_ACCOUNT_H

namespace sict {

const int max_name_length = 40;
const int min_sin = 100000000;
const int max_sin = 999999999;

class CRA_Account {

char m_familyName[max_name_length];    
char m_givenName[max_name_length];
int m_sin;

public:
    void set(const char* familyName, const char* givenName, int sin);
    bool isEmpty() const;
    void display() const;
    
};

}

#endif