/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   contact.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aconti <aconti@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/29 16:14:57 by artucn            #+#    #+#             */
/*   Updated: 2024/07/01 14:24:37 by aconti           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#include "contact.hpp"

void Contact::setFirstName(const std::string firstName)
{
    this->firstName = firstName;
}

void Contact::setLastName(const std::string lastName)
{
    this->lastName = lastName;
}

void Contact::setNickname(const std::string nickname)
{
    this->nickname = nickname;
}

void Contact::setNumber(const std::string number)
{
    this->number = number;
}

void Contact::setIndex(const uint8_t idx)
{
    this->idx = idx;
}

std::string Contact::getFirstName() const
{
    return (this->firstName);
}

std::string Contact::getLastName() const
{
    return (this->lastName);
}

std::string Contact::getNickname() const
{
    return (this->nickname);
}

std::string Contact::getNumber() const
{
    return (this->number);
}

std::uint8_t Contact::getIndex() const
{
    return (this->idx);
}