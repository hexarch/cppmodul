/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alcelik <alcelik@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/20 12:51:35 by alcelik           #+#    #+#             */
/*   Updated: 2023/10/20 17:31:28 by alcelik          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <string>

int main(void)
{

   
    std::string str = "HI THIS IS BRAIN";
    std::string *stringPTR = &str;
    std::string &stringREF = str;
    // Dizenin bellek adresini  işaretçinin ve refin ve işaret ettiği bellek adresi ekrana yazdır.
    std::cout <<"memmory address of str: " << &str << std::endl;
    std::cout <<"memmory address held by pointer: " << stringPTR << std::endl;
    std::cout <<"memmory addres held by reference: " << &stringREF << std::endl;
    //dizeyi işaretçinin  ve refin işaret ettiği değeri ekrana yazdır.
    std::cout <<"value of str: "<< str << std::endl;
    std::cout << "value of pointed by pointer: "<< *stringPTR << std::endl;
    std::cout << "value of pointed by reference: "<< stringREF << std::endl;

    return 0;
}