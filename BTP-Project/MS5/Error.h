/*
Name: Abdulbasid Guled
Student Number: 156024184
Email: aguled5@myseneca.ca
Due Date: July 18, 2019
Milestone 2
*/

#ifndef _AID_ERROR_H
#define _AID_ERROR_H
#include <iostream>

namespace aid 

{

    class Error
    {
        char* m_error;

        public:
            explicit Error(const char* errorMessage = nullptr);
            ~Error();
            void clear();
            bool isClear() const;
            void message(const char* str);
            const char* message() const;
            Error(const Error& error) = delete;
            Error& operator=(const Error& error) = delete;
    };
    
    std::ostream& operator<<(std::ostream& os, const Error& error);

}

#endif