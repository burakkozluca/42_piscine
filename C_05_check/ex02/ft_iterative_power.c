/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_power.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: burakkozluca <burakkozluca@student.42.f    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/16 23:01:03 by burakkozluc       #+#    #+#             */
/*   Updated: 2021/10/16 23:18:57 by burakkozluc      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int ft_iterative_power(int nb, int power)
{
	int a;

	a;
	if (power < 0)
		return (0);
	if (power == 0)
		return(1);
	while (power > 1)
	{
		a *= nb;
		power--;
	}
	return(a);
}
