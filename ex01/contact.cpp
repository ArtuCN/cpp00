/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   contact.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aconti <aconti@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/29 16:14:57 by artucn            #+#    #+#             */
/*   Updated: 2024/10/18 11:30:13 by aconti           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#include "contact.hpp"

void Contact::setFirstName(const std::string firstName)
{
    this->_firstName = firstName;
}

void Contact::setLastName(const std::string lastName)
{
    this->_lastName = lastName;
}

void Contact::setNickname(const std::string nickname)
{
    this->_nickname = nickname;
}

void Contact::setNumber(const std::string number)
{
    this->_number = number;
}

void Contact::setIndex(const int idx)
{
    this->idx = idx;
}

std::string Contact::getFirstName() const
{
    return (this->_firstName);
}

std::string Contact::getLastName() const
{
    return (this->_lastName);
}

std::string Contact::getNickname() const
{
    return (this->_nickname);
}

std::string Contact::getNumber() const
{
    return (this->_number);
}

int Contact::getIndex() const
{
    return (this->idx);
}