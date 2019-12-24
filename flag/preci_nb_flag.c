/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   prec_nb_flag.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bsanaoui <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/11/19 17:34:24 by bsanaoui          #+#    #+#             */
/*   Updated: 2019/11/19 17:34:25 by bsanaoui         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libftprintf.h"

static void		permuter(int *preci)
{
	if (*preci == -1)
		*preci = -2;
	else if (*preci == 0)
		*preci = -1;
}

int				preci_nb_flag(va_list args, char *fmt, int *len_flag)
{
	int		precision;
	int		len_preci;

	precision = 0;
	len_preci = 0;
	if (*fmt == '.' && *(fmt + 1) == '*')
	{
		*len_flag += 2;
		precision = va_arg(args, int);
		permuter(&precision);
	}
	else if (*fmt == '.')
	{
		precision = ft_atoi((fmt + 1), &len_preci);
		*len_flag += len_preci + 1;
		permuter(&precision);
	}
	return (precision);
}
