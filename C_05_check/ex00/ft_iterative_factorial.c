/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_factorial.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bkozluca <bkozluca@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/17 09:51:45 by bkozluca          #+#    #+#             */
/*   Updated: 2021/10/17 12:08:56 by bkozluca         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	ft_iterative_factorial(int nb)
{
	int	a;

	a = 1;
	if (nb < 0)
		return (0);
	else if (nb == 1)
		return (1);
	while (nb > 1)
	{
		a *= nb--;
	}
	return (a);
}
