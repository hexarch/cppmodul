/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alcelik <alcelik@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/14 16:32:13 by alcelik           #+#    #+#             */
/*   Updated: 2023/09/14 16:32:14 by alcelik          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Phonebook.hpp"

int main()
{
	Phonebook pb;
	std::string	str;

	while(1)
	{
		std::cout<<">";
		std::getline(std::cin,str);
		if(str == "ADD" || str == "add")
			pb.add();
		else if(str == "SEARCH"|| str == "search")
			pb.search();
		else if(str == "EXİT" || str == "EXIT")
			break;
		else
			std::cout<<"Enter a valid command!" << std::endl;
	}
	return (0);
}