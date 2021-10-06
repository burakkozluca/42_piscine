/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush02.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bkozluca <burakkozluca@outlook.com>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/03 14:51:23 by bkozluca          #+#    #+#             */
/*   Updated: 2021/10/03 14:51:33 by bkozluca         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char a);

void	rush(int x, int y)
{	
	int	i;
	int	j;

	i = 1;
	while (i <= y)
	{
		j = 1;
		while (j <= x)
		{
			if ((j == 1 || j == x) && (i == 1))
				ft_putchar(65 );
			else if ((j == 1 || j == x) && (i == y))
				ft_putchar(67 );
			else if ((j == 1 && i > 1 && i < y) || (j == x && i > 1 && i < y))
				ft_putchar(66 );
			else if ((i == 1 && j > 1 && j < x) || (i == y && j > 1 && j < x))
				ft_putchar(66 );
			else
				ft_putchar(32 );
			j++;
		}
		i++;
		ft_putchar(10 );
	}
}
