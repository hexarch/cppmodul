/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhonebookUtils.cpp                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alcelik <alcelik@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/14 16:32:21 by alcelik           #+#    #+#             */
/*   Updated: 2023/09/14 16:32:22 by alcelik          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Phonebook.hpp"

void printHood(){
	std::cout << "---------------------------------------------" << std::endl;
	std::cout << "|     index|first name| last name|  nickname|" << std::endl;
	std::cout << "---------------------------------------------" << std::endl;
}

void printStr(std::string str){
	if(str.length() > 10)
	{
		for(int i = 0; i < 9; i++)
			std::cout << str[i];
		std::cout << ".";
}

	else{
		for(int i = 0; i < (10-(int)str.size()); i++)//gönderilen str den 10 çıkarır ve o kadar boşluk atar sağa hizalamak için
			std::cout <<" ";//stringi ekrana yazdırır
		std::cout<<str;
	}
	std::cout <<"|";
}
void printContacts(Contact _contact[8], int j){
	std::string str;
	for (int i = 0; i <j; i++)
	{
		std::cout << "|"<<"       "<<i +1<<"|";
		str = _contact[i].getFirstName();
		printStr(str);
		str = _contact[i].getLastName();
		printStr(str);
		str = _contact[i].getNickName();
		printStr(str);
		std::cout << std::endl;
	}
	std::cout << "---------------------------------------------" << std::endl;
}

void printDetail(Contact _contact[8], int row)
{
	std::cout << "First name : " << _contact[row].getFirstName() << std::endl;
	std::cout << "Last name : " << _contact[row].getLastName() << std::endl;
	std::cout << "Nickname : " << _contact[row].getNickName() << std::endl;
	std::cout << "Number : " << _contact[row].getNumber() << std::endl;
	std::cout << "Darkest secret : " << _contact[row].getSecret() << std::endl;
}
