/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   phonebook.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: artucn <artucn@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/29 16:35:18 by artucn            #+#    #+#             */
/*   Updated: 2024/06/29 17:17:06 by artucn           ###   ########.fr       */
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


/*void Phone_book::search()
{
    cout>>"index     |first name|last name |nickname  |number    |";
    <<endl;
}*/