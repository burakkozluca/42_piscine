/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_params.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bkozluca <bkozluca@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/20 18:33:09 by bkozluca          #+#    #+#             */
/*   Updated: 2021/10/20 18:33:14 by bkozluca         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	ft_strcmp(char *s1, char *s2)
{
	int	a;

	a = 0;
	while (s1[a] && s2[a] && s1[a] == s2[a])
		a++;
	return (s1[a] - s2[a]);
}

void	ft_putstr(char *str)
{
	int	b;

	b = 0;
	while (str[b])
	{
		write(1, &str[b], 1);
		b++;
	}
}

int	main(int argc, char **argv)
{
	int		c;
	int		d;
	char	*e;

	c = 0;
	while (++c < argc - 1)
	{
		d = c;
		while (++d < argc)
		{
			if (ft_strcmp(argv[c], argv[d]) > 0)
			{
				e = argv[c];
				argv[c] = argv[d];
				argv[d] = e;
			}
		}
	}
	c = 0;
	while (++c < argc)
	{
		ft_putstr(argv[c]);
		write(1, "\n", 1);
	}
	return (0);
}
