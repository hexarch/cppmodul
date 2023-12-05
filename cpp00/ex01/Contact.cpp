/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alcelik <alcelik@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/14 16:32:01 by alcelik           #+#    #+#             */
/*   Updated: 2023/09/14 16:32:02 by alcelik          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Contact.hpp"

std::string Contact::getFirstName() const{
	return(this->firstName);
}

std::string Contact::getLastName() const{
	return(this->lastName);
}

std::string Contact::getNickName()const{
	return(this->nickName);
}

std::string Contact::getNumber()const{
	return(this->number);
}

std::string Contact::getSecret()const{
	return(this->secret);
}

void Contact::setFirstName(std::string str)
{
	this->firstName = str;
}

void Contact::setLastName(std::string str)
{
	this->lastName = str;
}

void Contact::setNickName(std::string str)
{
	this->nickName = str;
}
void Contact::setNumber(std::string str)
{
	this->number = str;
}
void Contact::setSecret(std::string str)
{
	this->secret = str;
}
Contact::Contact(){}

Contact::~Contact(){}