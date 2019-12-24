/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   conversion_char.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bsanaoui <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/11/16 17:02:32 by bsanaoui          #+#    #+#             */
/*   Updated: 2019/11/16 17:02:35 by bsanaoui         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libftprintf.h"

int				conversion_char(va_list args, char *fmt, int width)
{
	print_char(va_arg(args, int), ft_abs(width) - 1, sign_flag(width, *fmt));
	if (width == 0)
		width = 1;
	return (ft_abs(width));
}
