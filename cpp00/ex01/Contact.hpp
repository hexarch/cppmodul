/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.hpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alcelik <alcelik@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/14 16:32:05 by alcelik           #+#    #+#             */
/*   Updated: 2023/09/14 16:32:06 by alcelik          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# ifndef	CONTACT_HPP
# define CONTACT_HPP

#include <iostream>
#include <string>

class Contact{
	private:
		std::string firstName;
		std::string lastName;
		std::string nickName;
		std::string number;
		std::string secret;
	public:
	Contact();
	~Contact();
	std::string getFirstName() const; //const sadece okuma sağlar değiştirmeye izin vermez
	std::string getLastName() const;
	std::string getNickName() const;
	std::string getNumber() const;
	std::string getSecret() const;
	void setFirstName(std::string firstName);
	void setLastName(std::string lastName);
	void setNickName(std::string nickName);
	void setNumber(std::string number);
	void setSecret(std::string secret);	
};

#endif