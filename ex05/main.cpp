/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: francesco <francesco@student.42.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/25 20:31:09 by francesco         #+#    #+#             */
/*   Updated: 2024/02/25 21:35:32 by francesco        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Harl.hpp"

int main(void)
{
    Harl    bob;

    bob.complain("DEBUG");
    bob.complain("INFO");
    bob.complain("WARNING");
    bob.complain("ERROR");
    bob.complain("");
}