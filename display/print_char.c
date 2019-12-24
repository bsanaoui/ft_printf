/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   print_char.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bsanaoui <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/11/18 16:56:51 by bsanaoui          #+#    #+#             */
/*   Updated: 2019/11/18 16:56:53 by bsanaoui         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libftprintf.h"

static void		display_left(char convertor, int width)
{
	ft_putchar(convertor);
	while (width-- >= 1)
		ft_putchar(' ');
}

static void		display_right(char convertor, int width)
{
	while (width-- >= 1)
		ft_putchar(' ');
	ft_putchar(convertor);
}

static void		display_zero(char convertor, int width)
{
	while (width-- >= 1)
		ft_putchar('0');
	ft_putchar(convertor);
}

void			print_char(char c, int width, char sign)
{
	if (sign == '0')
		display_zero(c, width);
	else if (sign == '-')
		display_left(c, width);
	else if (sign == '+')
		display_right(c, width);
	else
		display_right(c, 0);
	return ;
}
