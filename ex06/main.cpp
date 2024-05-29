/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ftholoza <ftholoza@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/25 20:31:09 by francesco         #+#    #+#             */
/*   Updated: 2024/05/29 20:13:07 by ftholoza         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Harl.hpp"

int main(int argc, char **argv)
{
    Harl    bob;
    int     i;
    std::string tab[4] = {"DEBUG", "INFO", "WARNING", "ERROR"};

    i = 0;
    if (argc < 2)
        i = 5;
    while (i < 5)
    {
        if (i == 4)
            break;
        if ((std::string)argv[1] == tab[i])
            break;
        i++;
    }
    bob.complain("DEBUG", i);
    bob.complain("INFO", i);
    bob.complain("WARNING", i);
    bob.complain("ERROR", i);
    bob.complain("", i);
}