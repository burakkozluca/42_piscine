/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_program_name.c                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bkozluca <bkozluca@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/19 11:00:16 by bkozluca          #+#    #+#             */
/*   Updated: 2021/10/19 11:30:33 by bkozluca         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	main(int argc, char **argv)
{
	int	j;

	j = 0;
	if (argc > 0)
	{
		while (argv[0][j] != '\0')
		{
			write(1, &argv[0][j], 1);
			j++;
		}
		write(1, "\n", 1);
	}
	return (0);
}
