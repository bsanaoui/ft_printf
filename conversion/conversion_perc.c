/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   conversion_perc.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bsanaoui <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/11/26 22:01:33 by bsanaoui          #+#    #+#             */
/*   Updated: 2019/11/26 22:01:35 by bsanaoui         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libftprintf.h"

int		conversion_perc(char *fmt, int width)
{
	if (*fmt == '0' && width < 0)
		print_char('%', ft_abs(width) - 1, '-');
	else
		print_char('%', ft_abs(width) - 1, sign_flag(width, *fmt));
	if (width == 0)
		width = 1;
	return (ft_abs(width));
}
