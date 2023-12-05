/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alcelik <alcelik@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/20 16:59:43 by alcelik           #+#    #+#             */
/*   Updated: 2023/10/20 17:56:30 by alcelik          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <fstream>

void    replace(std::string content, std::string s1, std::string s2, std::string fname)
{
    std::ofstream outputFile(fname + ".replace");
    size_t pos = content.find(s1);
    while(pos != std::string::npos) 
    {
        content.erase(pos, s1.length()); //lenghkadar silme işlemi yapıyor 
        content.insert(pos, s2);//s2 ye posu ekliyor 
        pos = content.find(s1); //posu s1 indexine eşitle
    }
    outputFile << content;
    outputFile.close();
}
int main(int ac, char **av)
{
    char    c;
    std::string content;

    if (ac != 4)
        return (std::cout <<"This program accept only 4 arguments!" << std::endl, -1);
    std::ifstream inputFile(av[1]);
    if (!inputFile)
        return (std::cout << "Error: Can not open file!" << std::endl, -1);
    std::string s1 = av[2];
    std::string s2 = av[3];
    if (s1 == s2)
        return (std::cout << "There is nothing to change!" << std::endl, -1);
    while (!inputFile.eof()&& inputFile >> std::noskipws >> c)
        content += c;
    inputFile.close();
    return (replace(content,s1,s2,av[1]), 0);
}