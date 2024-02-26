/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: francesco <francesco@student.42.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/23 22:15:11 by francesco         #+#    #+#             */
/*   Updated: 2024/02/24 14:31:39 by francesco        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Weapon.hpp"
#include "iostream"

Weapon::Weapon()
{   
}

Weapon::Weapon(std::string type)
{
    this->_type = type;
    std::cout << "weapon: " << type << " created" << std::endl;
}

Weapon::~Weapon()
{
}

const std::string& Weapon::get_type()
{
    return (this->_type);
}

void Weapon::set_type(std::string type)
{
    this->_type = type;
}