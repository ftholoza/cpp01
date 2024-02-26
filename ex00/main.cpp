/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: francesco <francesco@student.42.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/23 14:57:01 by francesco         #+#    #+#             */
/*   Updated: 2024/02/23 15:34:13 by francesco        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

void    zombie_annouce(Zombie *z)
{
    z->announce();
    return;
}

int main(void)
{
    Zombie  *z;
    Zombie  *zo;
    Zombie zombie("Josh");
    zombie.announce();
    
    std::cout << "malloc z puis annonce" << std::endl;
    z = newZombie("Martin");
    z->announce();
    delete z;
    std::cout << "2 * randomChump" << std::endl;
    randomChump("Robert");
    randomChump("Pascal");
    std::cout << "malloc 2 z puis annonce" << std::endl;
    z = newZombie("Monique");
    zo = newZombie("Christelle");
    zombie_annouce(z);
    zombie_annouce(zo);
    delete(z);
    delete(zo);
    return (0);
}