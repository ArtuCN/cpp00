/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   phonebook.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aconti <aconti@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/29 16:35:18 by artucn            #+#    #+#             */
/*   Updated: 2024/07/01 15:46:30 by aconti           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "phonebook.hpp"

Phone_book::Phone_book()
{
   this->num = 0;
}

std::string Phone_book::truncateName(const std::string& name)
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
    if (num >= LIMIT || flag != -1)
    {
        flag++;
        std::cout << "First name: ";
        std::cin >> firstName;
        contacts[flag].setFirstName(truncateName(firstName));
        
        std::cout << "Last name: ";
        std::cin >> lastName;
        contacts[flag].setLastName(truncateName(lastName));

        std::cout << "Nickname: ";
        std::cin >> nickname;
        contacts[flag].setNickname(truncateName(nickname));

        std::cout << "Number: ";
        std::cin >> number;
        contacts[flag].setNumber(truncateName(number));

        contacts[flag].setIndex(((uint8_t)flag));
        if (flag == LIMIT - 1)
            flag = -1;
    }
    else
    {    
        std::cout << "First name: ";
        std::cin >> firstName;
        contacts[num].setFirstName(truncateName(firstName));
    
        std::cout << "Last name: ";
        std::cin >> lastName;
        contacts[num].setLastName(truncateName(lastName));

        std::cout << "Nickname: ";
        std::cin >> nickname;
        contacts[num].setNickname(truncateName(nickname));

        std::cout << "Number: ";
        std::cin >> number;
        contacts[num].setNumber(truncateName(number));

        contacts[num].setIndex(num);
        num++;
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

    for (int i = 0; i < num; i++)
    {
        std::cout << std::setw(10) << std::right <<static_cast<unsigned int>(contacts[i].getIndex()) << "|";
        std::cout << std::setw(10) << std::right << contacts[i].getFirstName() << "|";
        std::cout << std::setw(10) << std::right << contacts[i].getLastName() << "|";
        std::cout << std::setw(10) << std::right << contacts[i].getNickname() << "|";
        std::cout << std::setw(10) << std::right << contacts[i].getNumber() << "|";
        std::cout << std::endl;
    }
    std::cout<<"Enter the index of the contact you would like to see:"<<std::endl;
    std::cin>>index;
    if (index < 0 || index >= num)
    {
        std::cout<<"Invalid index"<<std::endl;
        return;
    }
    else
        display(index, contacts);
}

void Phone_book::exit()
{
    std::cout << "Exit" << std::endl;
}