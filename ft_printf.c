/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bsanaoui <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/11/12 14:58:12 by bsanaoui          #+#    #+#             */
/*   Updated: 2019/11/12 15:00:51 by bsanaoui         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libftprintf.h"

int		ft_printf(const char *fmt, ...)
{
	va_list		args;
	int			steps;
	int			nb_print;

	va_start(args, fmt);
	steps = 0;
	nb_print = 0;
	while (*fmt != '\0')
	{
		if (*fmt == '%')
		{
			steps = check_conversion(args, (fmt + 1), &nb_print);
			fmt += steps;
		}
		if (*fmt == '%')
			continue ;
		if (*fmt == '\0')
			break ;
		ft_putchar(*fmt);
		nb_print++;
		fmt++;
	}
	va_end(args);
	return (nb_print);
}
