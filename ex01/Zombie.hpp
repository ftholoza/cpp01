/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: francesco <francesco@student.42.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/23 14:26:29 by francesco         #+#    #+#             */
/*   Updated: 2024/02/23 16:49:20 by francesco        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ZOMBIE_HPP
# define ZOMBIE_HPP

# include <iostream>
# include <string>
# include <new>
# include <cstdio>
# include <stdlib.h>

class   Zombie
{
    private:
        std::string _name;
    public:
        Zombie();
        Zombie(std::string name);
        ~Zombie();
        void    announce(void);
        void    set_name(std::string name);
};

Zombie* newZombie(std::string name);
Zombie* zombieHorde(int n, std::string name);
void    randomChump(std::string name);


#endif