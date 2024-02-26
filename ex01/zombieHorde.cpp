/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   zombieHorde.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: francesco <francesco@student.42.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/23 15:54:12 by francesco         #+#    #+#             */
/*   Updated: 2024/02/23 17:33:06 by francesco        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

Zombie  *zombieHorde(int N, std::string name)
{
    int     i;

    i = 0;
    Zombie *res;
    if (N < 0)
    {
        std::cout << "N can't be negative" << std::endl;
        return (NULL);
    }
    try{
        res = new Zombie[N];
    }
    catch (std::bad_alloc&)
    {
        std::cout << "Error allocation horde" << std::endl;
        return (NULL);
    }
    while (i < N)
    {
        res[i].set_name(name);
        i++;
    }
    return (res);
}
