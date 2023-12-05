/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AAnimal.hpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alcelik <alcelik@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/25 15:44:58 by alcelik          #+#    #+#             */
/*   Updated: 2023/11/06 11:08:17 by alcelik          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef AANIMAL_HPP
#define AANIMAL_HPP

#include <iostream>
#include <string>

class AAnimal {
    protected:
        std::string type;
    public:
        AAnimal();
        AAnimal(std::string type);
        AAnimal(const AAnimal& copy);
        AAnimal &operator=(const AAnimal& copy);
        virtual ~AAnimal();
        virtual void makeSound() const = 0;
        std::string getType() const;
        void setType(std::string);
};

#endif
