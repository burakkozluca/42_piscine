/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_find_next_prime.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bkozluca <bkozluca@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/17 12:30:44 by bkozluca          #+#    #+#             */
/*   Updated: 2021/10/17 15:43:20 by bkozluca         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_is_prime(int nb)
{
	int	i;
	int	s;

	s = 0;
	i = 2;
	while (i < nb)
	{
		if (nb % i == 0)
			s++;
		i++;
	}
	if (s == 0 && !(nb < 2))
		return (1);
	else
		return (0);
}

int	ft_find_next_prime(int nb)
{
	while (nb < 2147483647 && !(ft_is_prime(nb)))
	{
		nb++;
	}
	return (nb);
}
