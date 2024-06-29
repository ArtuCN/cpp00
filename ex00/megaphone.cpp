/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   megaphone.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: artucn <artucn@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/29 14:52:20 by artucn            #+#    #+#             */
/*   Updated: 2024/06/29 15:18:46 by artucn           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>

int main(int ac, char **av)
{
    int i = 0;
    int j;
    if (ac == 1)
    {
        std::cout<<"* LOUD AND UNBEARABLE FEEDBACK NOISE *" << std::endl;
    }
    else
    {
        while (av[++i])
        {
            j = -1;
            while(av[i][++j])
            {
                if (av[i][j] >= 'a' && av[i][j] <= 'z')
                    std::cout << (char)(av[i][j] - 32);
                else
                    std::cout << av[i][j];
            }
        }
    }
    std::cout << "\n";
}