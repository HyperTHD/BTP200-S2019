#ifndef _SICT_CONTACT_H
#define _SICT_CONTACT_H

namespace sict {

const int MAX_CHAR = 20;
const int areaCodeLength = 3;
const int numberLength = 7;
const int numberCode1Length = 3;
const int numberCode2Length = 4;

class Contact {

    char m_contact[MAX_CHAR + 1];
    long long* m_phoneNum;
    int maxPhoneNum;

    bool validatePhone(const long long phoneNum);

public:
    Contact();
    Contact(const char* name, const long long* phoneNum, const int maxPhone);
    ~Contact();
    bool isEmpty() const;
    void display() const;
    Contact(const Contact& other);
    Contact& operator=(const Contact& other);
    Contact& operator+=(long long phoneNum);
    };

}

#endif