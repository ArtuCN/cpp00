/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   phonebook.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: artucn <artucn@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/29 16:35:18 by artucn            #+#    #+#             */
/*   Updated: 2024/06/30 18:08:03 by artucn           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "phonebook.hpp"

Phone_book::Phone_book()
{
   this->num = 0;
}

void Phone_book::add()
{
    std:: string firstName, lastName, nickname, number;
    if (num < LIMIT)
    {
        std::cout << "First name: ";
        std::cin >> firstName;
        contacts[num].setFirstName(firstName);
    
        std::cout << "Last name: ";
        std::cin >> lastName;
        contacts[num].setLastName(lastName);

        std::cout << "Nickname: ";
        std::cin >> nickname;
        contacts[num].setNickname(nickname);

        std::cout << "Number: ";
        std::cin >> number;
        contacts[num].setNumber(number);

        contacts[num].setIndex(num);
        num++;
    }
    else
        std::cout << "Phone book is full" << std::endl;
}


void Phone_book::search()
{
    std::cout<<"index     |first name|last name |nickname  |number    |\n";
    for (int i = 0; i < num; i++)
    {
        std::cout << contacts[i].idx << "\t\t|";
        std::cout << contacts[i].getFirstName() << "         |";
        std::cout << contacts[i].getLastName() << "         |";
        std::cout << contacts[i].getNickname() << "         |";
        std::cout << contacts[i].getNumber() << "         |";
        std::cout << std::endl;
    }
}

void Phone_book::exit()
{
    std::cout << "Exit" << std::endl;
}