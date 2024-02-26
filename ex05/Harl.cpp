/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Harl.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: francesco <francesco@student.42.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/25 20:31:01 by francesco         #+#    #+#             */
/*   Updated: 2024/02/25 21:49:15 by francesco        ###   ########.fr       */
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

void Harl::complain(std::string level)
{
    int     i = 0;
    void    (Harl::*complain[])(void) = {&Harl::debug, &Harl::info, &Harl::warning, &Harl::error};
    std::string tab[4] = {"DEBUG", "INFO", "WARNING", "ERROR"};
     
    while (i < 4)
    {
        if (level == tab[i])
            return((this->*complain[i])());
        i++;
    }
    std::cout << "Nothing to complain" << std::endl;
    return ;
}