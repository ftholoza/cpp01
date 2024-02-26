/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: francesco <francesco@student.42.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/24 01:11:11 by francesco         #+#    #+#             */
/*   Updated: 2024/02/24 14:47:37 by francesco        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "HumanB.hpp"
#include "Weapon.hpp"

HumanB::HumanB(std::string name)
{
    std::cout   << "creation HumanB: " << name << std::endl;
    this->name = name;
    this->weapon = NULL;
}

HumanB::~HumanB()
{
}

void HumanB::attack()
{
    if (this->weapon == NULL)
    {
        std::cout << this->name << " has no weapon he can't attack!!" <<  std::endl;
        return ;
    }
    else
        std::cout << this->name << " attacks with their " << this->weapon->get_type() <<  std::endl;
}

void HumanB::set_weapon(Weapon &weapon)
{
    this->weapon = &weapon;
}
