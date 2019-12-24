/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   is_flags.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bsanaoui <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/11/17 19:54:22 by bsanaoui          #+#    #+#             */
/*   Updated: 2019/11/17 19:54:28 by bsanaoui         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libftprintf.h"

int		is_flag(char *str)
{
	while (*str == ' ' || *str == '\n' || *str == '\v' ||
	*str == '\r' || *str == '\t' || *str == '\f')
		str++;
	if ((ft_isdigit(*str) && *str != '0') || *str == '-' || *str == '0' ||
		*str == '.' || *str == '*')
		return (1);
	if (*str == 'd' || *str == 'i' || *str == 'u' || *str == 'c' ||
		*str == 's' || *str == 'x' || *str == 'X' || *str == '%' ||
		*str == 'p')
		return (1);
	return (0);
}
