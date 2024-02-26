/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: francesco <francesco@student.42.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/24 14:54:27 by francesco         #+#    #+#             */
/*   Updated: 2024/02/25 20:17:12 by francesco        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include <fstream>
# include <iostream>
# include <cerrno>

int replace(char    **argv, std::string str)
{
    std::ofstream   outfile;
    std::string     out_name;
    const char      *text;
    unsigned int    target;
    unsigned int    i;

    i = 0;
    text = str.c_str();
    out_name = ((std::string)argv[1] + ".replace");
    outfile.open(out_name.c_str());
    while (i < str.size())
    {
        target = str.find(argv[2], i);
        if (i == target)
        {
            outfile << argv[3];
            i += std::string(argv[2]).size();
        }
        else
        {
            outfile << text[i];
            i++;
        }
    }
    return (0);
}

int main(int argc, char **argv)
{
    std::ifstream   infile;
    char            buff;
    std::string     text;
    

    if (argc != 4)
    {
        std::cout << "Error: infile word_to_replace replace_word" << std::endl;
        return (1);
    }
    infile.open(argv[1]);
    if (infile.fail())
    {
        std::perror(argv[1]);
        return (1);
    }
    while (infile.get(buff))
        text += buff;
    replace(argv, text);
}