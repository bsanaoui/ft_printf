/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf_utils.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bsanaoui <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/11/12 15:32:38 by bsanaoui          #+#    #+#             */
/*   Updated: 2019/11/12 15:33:48 by bsanaoui         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libftprintf.h"

static int		calcul_flag(va_list args, char *fmt, int *width, int *preci)
{
	int	len_flag;

	len_flag = 0;
	*width = 0;
	*preci = 0;
	if (is_flag((char *)fmt))
	{
		*width = width_nb_flag(args, (char *)fmt, &len_flag);
		*preci = preci_nb_flag(args, ((char *)fmt + len_flag), &len_flag);
	}
	return (len_flag);
}

int				check_conversion(va_list args, const char *fmt, int *nb_print)
{
	int		len_flag;
	int		width;
	int		preci;

	len_flag = calcul_flag(args, (char *)fmt, &width, &preci);
	if (*(fmt + len_flag) == 'c')
		*nb_print += conversion_char(args, (char *)fmt, width);
	if (*(fmt + len_flag) == 's')
		*nb_print += conversion_string(args, (char *)fmt, width, preci);
	if (*(fmt + len_flag) == 'd')
		*nb_print += conversion_d(args, (char *)fmt, width, preci);
	if (*(fmt + len_flag) == 'p')
		*nb_print += conversion_p(args, (char *)fmt, width, preci);
	if (*(fmt + len_flag) == 'i')
		*nb_print += conversion_d(args, (char *)fmt, width, preci);
	if (*(fmt + len_flag) == 'u')
		*nb_print += conversion_u(args, (char *)fmt, width, preci);
	if (*(fmt + len_flag) == 'x')
		*nb_print += conversion_x_l(args, (char *)fmt, width, preci);
	if (*(fmt + len_flag) == 'X')
		*nb_print += conversion_x_u(args, (char *)fmt, width, preci);
	if (*(fmt + len_flag) == '%')
		*nb_print += conversion_perc((char *)fmt, width);
	return (len_flag + 2);
}
