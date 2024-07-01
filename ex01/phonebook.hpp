#ifndef PHONE_BOOK_HPP
#define PHONE_BOOK_HPP

# include <iostream>
# include <stdint.h>
# include <string>
# include <iomanip>
# include "contact.hpp"

# define LIMIT 8

class Phone_book
{
    public:
        Phone_book();
        void add();
        void search();
        void exit();
    private:
        Contact contacts[LIMIT];
        static std::string truncateName(const std::string& name);
        uint8_t num;
};

#endif