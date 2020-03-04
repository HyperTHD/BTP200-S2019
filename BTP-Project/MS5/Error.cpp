/*
Name: Abdulbasid Guled
Student Number: 156024184
Email: aguled5@myseneca.ca
Due Date: July 18, 2019
Milestone 2
*/
#include <iostream>
#include <cstring>
#include <string>
#include "Error.h"

using namespace std;

namespace aid 
{
      Error::Error(const char* errorMessage)
    {
        if (errorMessage == nullptr)
        {
            m_error = nullptr;
        }
        else
        {
            m_error = new char[strlen(errorMessage) + 1];
            for (int i = 0; i < strlen(errorMessage); i++)
            {
                m_error[i] = errorMessage[i];
            }
            m_error[strlen(errorMessage)] = '\0';
        }
    }

    Error::~Error()
    {
        delete[] m_error;
    }

    void Error::clear()
    {
        delete[] m_error;
        m_error = nullptr;
    }

    bool Error::isClear() const
    {
        return (m_error == nullptr) ? true : false;
    }

    void Error::message(const char* str)
    {
        clear();
        if (str != nullptr)
        {
            char* temp = new char[strlen(str) + 1];
            strcpy(temp, str);
            temp[strlen(str)] = '\0';
            m_error = temp;
        }
    }

    const char* Error::message() const
    {
        return m_error;
    }

    std::ostream& operator<<(std::ostream& os, const Error& em)
    {
        if (!em.isClear())
        {
            os << em.message();
        }
        return os;
    }


}