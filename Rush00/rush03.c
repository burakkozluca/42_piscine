/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush03.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ftuncer <furkan_tuncer@yahoo.com>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/03 11:25:13 by ftuncer           #+#    #+#             */
/*   Updated: 2021/10/03 12:02:31 by ftuncer          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include<unistd.h>

void	ft_putchar(char x);

void	rush(int x, int y)
{
	int	a;
	int	b;

	a = 1;
	b = 1;
	while (y >= b)
	{
		while (x >= a)
		{
			if ((b == 1 || b == y) && (a == 1))
				ft_putchar('A');
			else if ((b == 1 || b == y) && (x == a))
				ft_putchar('C');
			else if ((b == 1 || b == y) && (x != 1 && x != a))
				ft_putchar('B');
			else if ((b != 1 && b != y) && (a == 1 || a == x))
				ft_putchar('B');
			else
				ft_putchar(' ');
			++a;
		}
		a = 1;
		ft_putchar('\n');
		++b;
	}
}	
