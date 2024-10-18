/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   megaphone.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aconti <aconti@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/29 14:52:20 by artucn            #+#    #+#             */
/*   Updated: 2024/10/18 11:24:36 by aconti           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <string>
#include <algorithm>
#include <cctype>

int main(int ac, char **av)
{
    if (ac == 1)
        std::cout<<"* LOUD AND UNBEARABLE FEEDBACK NOISE *";
    else
    {
        for(int i = 1; i < ac; i++)
        {
            std::string str = av[i];
            std::transform(str.begin(), str.end(), str.begin(), toupper);
            if (i == ac - 1)
                std::cout << str;
            else
                std::cout << str << " ";
        }
    }
    std::cout << "\n";
}