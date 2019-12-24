/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bsanaoui <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/10 19:43:39 by bsanaoui          #+#    #+#             */
/*   Updated: 2019/09/10 19:43:48 by bsanaoui         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libftprintf.h"

int		ft_atoi(char *str, int *len_flag)
{
	int ch;
	int sign;

	ch = 0;
	sign = 1;
	while (*str == ' ' || *str == '\n' || *str == '\v' ||
	*str == '\r' || *str == '\t' || *str == '\f' || *str == '-')
	{
		str++;
		(*len_flag) += 1;
	}
	if (*str == '-')
	{
		sign = -1;
		str++;
		(*len_flag) += 1;
	}
	while (*str >= '0' && *str <= '9')
	{
		ch = (ch * 10) + *str - '0';
		str++;
		(*len_flag) += 1;
	}
	return (sign * ch);
}
