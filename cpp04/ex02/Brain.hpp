/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Brain.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alcelik <alcelik@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/25 15:45:09 by alcelik          #+#    #+#             */
/*   Updated: 2023/11/06 11:08:25 by alcelik          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef BRAIN_HPP
#define BRAIN_HPP

#include <string>
#include <iostream>

class Brain {
    public:
        std::string ideas[100];
        Brain();
        Brain(const Brain& b);
        Brain &operator=(const Brain& b);
        virtual ~Brain();
};

#endif
