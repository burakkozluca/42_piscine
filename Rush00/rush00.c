/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush00.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bkozluca <burakkozluca@outlook.com>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/03 14:50:07 by bkozluca          #+#    #+#             */
/*   Updated: 2021/10/03 14:50:20 by bkozluca         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char a);

void	rush(int x, int y)
{	
	int	i;
	int	j;

	i = 1;
	while (i <= y && x > 0)
	{
		j = 1;
		while (j <= x)
		{	
			if ((j != 1 && j != x) && (i == 1 || i == y))
				ft_putchar(45 );
			else if ((i != 1 && i != y) && (j == 1 || j == x))
				ft_putchar(124 );
			else if ((i == 1 ) || (i == y) || (j == 1) || (j == x))
				ft_putchar(111 );
			else
				ft_putchar(32 );
			j++;
		}
		i++;
		ft_putchar(10 );
	}
}
