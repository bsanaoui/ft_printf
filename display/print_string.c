/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   print_strig.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bsanaoui <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/11/18 18:22:41 by bsanaoui          #+#    #+#             */
/*   Updated: 2019/11/18 18:22:45 by bsanaoui         ###   ########.fr       */
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

void			print_string(char *s, int width, char sign)
{
	if (sign == '-')
		display_left(s, width);
	else if (sign == '+')
		display_right(s, width);
	else
		display_right(s, 0);
}
