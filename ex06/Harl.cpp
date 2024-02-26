/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Harl.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: francesco <francesco@student.42.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/25 20:31:01 by francesco         #+#    #+#             */
/*   Updated: 2024/02/25 22:27:18 by francesco        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Harl.hpp"

Harl::Harl(void)
{
}

Harl::~Harl(void)
{
}

void    Harl::debug(void)
{
    std::cout << "Debug message here" << std::endl;
}

void    Harl::info(void)
{
    std::cout << "Hey info message here" << std::endl;
}

void    Harl::warning(void)
{
    std::cout << "WARNING!" << std::endl;
}

void    Harl::error(void)
{
    std::cout << "Error 404" << std::endl;
}

void Harl::complain(std::string level, int filter)
{
    int     i = 0;
    void    (Harl::*complain[])(void) = {&Harl::debug, &Harl::info, &Harl::warning, &Harl::error};
    
    switch(filter)
    {
        case 0:
            if (level == "DEBUG")
                return (this->*complain[0])();
        case 1:
            if (level == "INFO")
                return (this->*complain[1])();
        case 2:
            if (level == "WARNING")
               return (this->*complain[2])();
        case 3:
            if (level == "ERROR")
               return (this->*complain[3])();   
        default :
            std::cout << "[ Probably complaining about insignificant problems ]" << std::endl;
            return ;
    }
    std::cout << "Nothing to complain" << std::endl;
    return ;
}