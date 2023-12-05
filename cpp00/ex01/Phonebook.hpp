/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Phonebook.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alcelik <alcelik@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/14 16:32:20 by alcelik           #+#    #+#             */
/*   Updated: 2023/09/14 16:32:21 by alcelik          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# ifndef PHONEBOOK_HPP

# define PHONEBOOK_HPP

#include "Contact.hpp"

class Phonebook{
	private: 
		Contact _contact[8];
		int index;
		int flag;
	public:
		Phonebook();
		/* Bu, sınıfın yapıcı işlevidir ve sınıfın bir nesnesi (örneği) oluşturulduğunda otomatik olarak çağrılır.
		 Bu işlev, sınıfın başlatılmasını ve gerekli başlangıç ayarlarını yapmayı sağlar.*/
		~Phonebook();
		/*
		Bu, sınıfın yıkıcı işlevidir ve sınıfın bir nesnesi ömrü sona erdiğinde (örneğin, program sonlandığında) otomatik olarak çağrılır. 
		Bu işlev, sınıfın ömrü sona erdiğinde kaynakları temizlemek veya diğer son işlemleri gerçekleştirmek için kullanılır.*/
		void add();
		void search();
};

void printHood();
void printContacts(Contact _contact[8], int j);
void printDetail(Contact _contact[8],int row);

#endif