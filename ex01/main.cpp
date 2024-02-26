/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: francesco <francesco@student.42.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/23 16:07:40 by francesco         #+#    #+#             */
/*   Updated: 2024/02/23 17:33:35 by francesco        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

int main(void)
{
    Zombie *horde;
    int     i;

    i = 0;
    horde = zombieHorde(420, "Pablo");
    if (horde == NULL)
        return (0);
    while (i < 420)
    {
        std::cout << "zombie:" << i << " ";
        horde[i].announce();
        i++;
    }
    delete [] horde;
}