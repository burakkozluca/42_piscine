/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_fibonacci.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bkozluca <bkozluca@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/16 23:31:06 by burakkozluc       #+#    #+#             */
/*   Updated: 2021/10/17 13:09:35 by bkozluca         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	ft_fibonacci(int index)
{
	int	x;

	if (index == 0)
		return (0);
	else if (index == 1)
		return (1);
	else if (index > 1)
	{
		x = ft_fibonacci(index - 1) + ft_fibonacci(index - 2);
		return (x);
	}
	else
		return (-1);
}
