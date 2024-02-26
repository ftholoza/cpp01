/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: francesco <francesco@student.42.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/23 17:37:34 by francesco         #+#    #+#             */
/*   Updated: 2024/02/23 17:48:34 by francesco        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "string"
#include "iostream"

int main(void)
{
    std::string string = "HI THIS IS BRAIN";
    std::string *stringPTR = &string;
    std::string &stringREF = string;

    std::cout << "string adress: " << &string << std::endl;
    std::cout << "stingPTR adress: " << stringPTR << std::endl;
    std::cout << "stringREF adress: " << &stringREF << std::endl;
    std::cout << "string content: " << string << std::endl;
    std::cout << "stringPTR content: " << *stringPTR << std::endl;
    std::cout << "stringREF content: " << stringREF << std::endl;
    return (0);
}