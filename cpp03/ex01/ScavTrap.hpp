/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alcelik <alcelik@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/22 09:10:25 by alcelik           #+#    #+#             */
/*   Updated: 2023/10/23 15:24:04 by alcelik          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SCAVTRAP_HPP
# define SCAVTRAP_HPP

#include "ClapTrap.hpp"

class ScavTrap : public ClapTrap
{
	public:

		/*				Functions				*/

		void 		guardGate		();

		/*			Orthodox Canonical Form			*/

					ScavTrap		();
					ScavTrap		(const std::string &);
					ScavTrap		(const ScavTrap &);
					~ScavTrap		();

		ScavTrap	&operator=		(const ScavTrap &);

};

std::ostream	&operator<<(std::ostream &stream, ScavTrap &);

#endif