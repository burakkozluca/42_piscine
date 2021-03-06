/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_boolean.h                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: burakkozluca <burakkozluca@student.42.f    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/19 19:11:37 by bkozluca          #+#    #+#             */
/*   Updated: 2021/10/20 10:25:25 by burakkozluc      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#   ifndef FT_BOOLEAN_H
#   define FT_BOOLEAN_H

#include <unistd.h>

typedef	int		t_bool;
#define EVEN(x) (x % 2 == 0) ? 1 : 0
#define TRUE 1
#define FALSE 0
#define EVEN_MSG "I have an even number of arguments.\n"
#define ODD_MSG "I have an odd number of arguments.\n"
#define SUCCESS 0

#   endif