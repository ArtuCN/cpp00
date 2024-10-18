/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   phonebook.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aconti <aconti@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/29 16:35:18 by artucn            #+#    #+#             */
/*   Updated: 2024/10/18 11:29:08 by aconti           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "phonebook.hpp"

Phone_book::Phone_book()
{
   this->_num = 0;
}

std::string Phone_book::_truncateName(const std::string& name)
{
    if (name.length() > 9)
    {
        return name.substr(0, 9) + ".";
    }
    return name;
}

void Phone_book::add()
{
    static int flag = -1;
    std:: string firstName, lastName, nickname, number;
    if (_num >= LIMIT || flag != -1)
    {
        flag++;
        std::cout << "First name: ";
        std::cin >> firstName;
        _contacts[flag].setFirstName(_truncateName(firstName));
        
        std::cout << "Last name: ";
        std::cin >> lastName;
        _contacts[flag].setLastName(_truncateName(lastName));

        std::cout << "Nickname: ";
        std::cin >> nickname;
        _contacts[flag].setNickname(_truncateName(nickname));

        std::cout << "Number: ";
        std::cin >> number;
        _contacts[flag].setNumber(_truncateName(number));

        _contacts[flag].setIndex(flag);
        if (flag == LIMIT - 1)
            flag = -1;
    }
    else
    {    
        std::cout << "First name: ";
        std::cin >> firstName;
        _contacts[_num].setFirstName(_truncateName(firstName));
    
        std::cout << "Last name: ";
        std::cin >> lastName;
        _contacts[_num].setLastName(_truncateName(lastName));

        std::cout << "Nickname: ";
        std::cin >> nickname;
        _contacts[_num].setNickname(_truncateName(nickname));

        std::cout << "Number: ";
        std::cin >> number;
        _contacts[_num].setNumber(_truncateName(number));

        _contacts[_num].setIndex(_num);
        _num++;
    }
}

void display(int index, Contact *contacts)
{
    std::cout << "First name: " << contacts[index].getFirstName() << std::endl;
    std::cout << "Last name: " << contacts[index].getLastName() << std::endl;
    std::cout << "Nickname: " << contacts[index].getNickname() << std::endl;
    std::cout << "Number: " << contacts[index].getNumber() << std::endl;
}

void Phone_book::search()
{
    std::cout << "index     |first name|last name |nickname  |number    |\n";
    int index;

    for (int i = 0; i < _num; i++)
    {
        std::cout << std::setw(10) << std::right <<static_cast<unsigned int>(_contacts[i].getIndex()) << "|";
        std::cout << std::setw(10) << std::right << _contacts[i].getFirstName() << "|";
        std::cout << std::setw(10) << std::right << _contacts[i].getLastName() << "|";
        std::cout << std::setw(10) << std::right << _contacts[i].getNickname() << "|";
        std::cout << std::setw(10) << std::right << _contacts[i].getNumber() << "|";
        std::cout << std::endl;
    }
    std::cout<<"Enter the index of the contact you would like to see:"<<std::endl;
    std::cin>>index;
    if (index < 0 || index >= _num)
    {
        std::cout<<"Invalid index"<<std::endl;
        return;
    }
    else
        display(index, _contacts);
}

void Phone_book::exit()
{
    std::cout << "Exit" << std::endl;
}