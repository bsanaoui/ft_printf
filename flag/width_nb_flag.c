/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   width_nb_flag.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bsanaoui <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/11/17 19:57:29 by bsanaoui          #+#    #+#             */
/*   Updated: 2019/11/17 19:57:34 by bsanaoui         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libftprintf.h"

int		width_nb_flag(va_list args, char *fmt, int *len_flag)
{
	if (*fmt == '*' || (*fmt == '-' && *(fmt + 1) == '*')
		|| (*fmt == '0' && *(fmt + 1) == '*'))
	{
		if (*fmt == '*')
			*len_flag += 1;
		else
			*len_flag += 2;
		return (va_arg(args, int));
	}
	return (ft_atoi(fmt, &(*len_flag)));
}
