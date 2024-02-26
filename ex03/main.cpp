/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: francesco <francesco@student.42.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/23 20:56:48 by francesco         #+#    #+#             */
/*   Updated: 2024/02/24 14:45:08 by francesco        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "HumanA.hpp"
#include "HumanB.hpp"
#include "Weapon.hpp"

/*int main(void)
{
    Weapon club = Weapon("crude spiked club");

    HumanA bob("Bob", club);
    bob.attack();
    club.set_type("some other type of club");
    bob.attack();
}*/
int main(void)
{
    Weapon club = Weapon("crude spiked club");

    HumanA bob("Bob", club);
    bob.attack();
    club.set_type("some other type of club");
    bob.attack();
    HumanB jim("Jim");
    
    jim.attack();
    club.set_type("baseball club");
    jim.set_weapon(club);
    jim.attack();
    club.set_type("some other type of club");
    jim.attack();
}