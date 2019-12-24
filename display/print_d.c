/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   print_d.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bsanaoui <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/11/24 17:14:24 by bsanaoui          #+#    #+#             */
/*   Updated: 2019/11/24 17:14:25 by bsanaoui         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libftprintf.h"

static void		display_left(char *s, int width)
{
	ft_putstr(s);
	while (width-- >= 1)
		ft_putchar(' ');
}

static void		display_right(char *s, int width)
{
	while (width-- >= 1)
		ft_putchar(' ');
	ft_putstr(s);
}

static void		display_zero(char *s, int width)
{
	if (*s == '-')
	{
		ft_putchar('-');
		s += 1;
	}
	while (width-- >= 1)
		ft_putchar('0');
	ft_putstr(s);
}

void			print_d(char *s, int width, char sign)
{
	if (sign == '0')
		display_zero(s, width);
	else if (sign == '-')
		display_left(s, width);
	else if (sign == '+')
		display_right(s, width);
	else
		display_right(s, 0);
}
