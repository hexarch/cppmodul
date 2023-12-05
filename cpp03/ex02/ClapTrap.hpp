/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alcelik <alcelik@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/22 09:10:08 by alcelik           #+#    #+#             */
/*   Updated: 2023/10/23 15:40:40 by alcelik          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CLAPTRAP_H
# define CLAPTRAP_H

#include <iostream>

class ClapTrap
{
	private:

		std::string	name;
		int 		hitPoints;
		int 		energyPoints;
		int 		attackDamage;

	public:

		/*				Functions				*/

		void		attack			(const std::string &);
		void		takeDamage		( unsigned int );
		void		beRepaired		( unsigned int );

		/*			Orthodox Canonical Form			*/

					ClapTrap		();
					ClapTrap		(const std::string &);
					ClapTrap		(const ClapTrap &);
					~ClapTrap		();

		ClapTrap	&operator=		(const ClapTrap &);

		/*			Setter && Getter			*/

		void		setName			(const std::string &);
		std::string	getName			();
		void		setHitPoints	( int );
		int			getHitPoints	();
		void		setAttackDamage	( int );
		int			getAttackDamage	();
		void		setEnergyPoint	( int );
		int			getEnergyPoint	();

};

std::ostream		&operator<<		(std::ostream &, ClapTrap &);

#endif