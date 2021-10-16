/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_recursive_power.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: burakkozluca <burakkozluca@student.42.f    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/16 23:03:09 by burakkozluc       #+#    #+#             */
/*   Updated: 2021/10/16 23:28:40 by burakkozluc      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int ft_recursive_power(int nb, int power)
{   
    int n;

    n = nb;
    if (power < 0)
        return(0);
    else if (power == 0)
        return(1);
    else
        return(nb * ft_recursive_power(n , power-1));
}