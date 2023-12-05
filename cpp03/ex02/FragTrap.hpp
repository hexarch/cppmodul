/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alcelik <alcelik@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/22 09:10:02 by alcelik           #+#    #+#             */
/*   Updated: 2023/10/23 15:40:51 by alcelik          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FRAGTRAP_HPP
# define FRAGTRAP_HPP

#include "ClapTrap.hpp"

class FragTrap : public ClapTrap
{
public:

		/*				Functions				*/

	    void		highFivesGuys	(void);

		/*			Orthodox Canonical Form			*/

					FragTrap		();
					FragTrap		(const std::string &);
					FragTrap		(const FragTrap &);
					~FragTrap		();

		FragTrap	&operator=		(const FragTrap &);

};

std::ostream	&operator<<(std::ostream &stream, FragTrap &);

#endif