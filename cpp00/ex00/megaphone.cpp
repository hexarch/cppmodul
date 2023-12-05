/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   megaphone.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alcelik <alcelik@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/14 16:31:57 by alcelik           #+#    #+#             */
/*   Updated: 2023/09/14 16:31:58 by alcelik          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>

int main(int ac, char **av)
{
    if(ac == 1)
        std::cout<<"* LOUD AND UNBEARABLE FEEDBACK NOISE *"<<std::endl;
    int j = 0;
    for(int i = 1; i<ac; i++)
    {
        j = std::strlen(av[i]);
        for (int y = 0; y < j; y++)
        {
            std::cout<<(char)toupper(av[i][y]);
        }
        std::cout<<std::endl;
    }
    return (0);
}
