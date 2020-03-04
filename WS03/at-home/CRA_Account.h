#ifndef _sict_CRA_ACCOUNT_H
#define _sict_CRA_ACCOUNT_H

namespace sict {

const int max_name_length = 40;
const int min_sin = 100000000;
const int max_sin = 999999999;
const int max_yrs = 4;

class CRA_Account {

char m_familyName[max_name_length];    
char m_givenName[max_name_length];
int m_sin;
int m_tax_return_year[max_yrs];
double m_balance_owed[max_yrs];
int m_years;

public:
    void set(const char* familyName, const char* givenName, int sin);
    bool isEmpty() const;
    void display() const;
    void set(int year, double balance);

    };

}

#endif