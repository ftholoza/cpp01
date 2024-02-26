#ifndef HUMANB_HPP
# define HUMANB_HPP

#include "Weapon.hpp"
#include "iostream"

class HumanB
{
    private:
        Weapon      *weapon;
        std::string name;
    public:
        HumanB(std::string name);
        ~HumanB();
        void    set_weapon(Weapon &weapon);
        void    attack();
};

#endif