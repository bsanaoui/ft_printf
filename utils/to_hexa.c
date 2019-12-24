/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   to_hexa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bsanaoui <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/11/26 22:31:07 by bsanaoui          #+#    #+#             */
/*   Updated: 2019/11/26 22:31:11 by bsanaoui         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libftprintf.h"

char	*to_hexa(unsigned long n, int cas)
{
	char			arr[50];
	unsigned long	result;
	int				i;
	char			*buff;

	if (!n)
		return (ft_strdup("0"));
	if (!cas)
		buff = "0123456789abcdef";
	else
		buff = "0123456789ABCDEF";
	result = n;
	i = 0;
	while (result)
	{
		arr[i] = buff[result % 16];
		result /= 16;
		i++;
	}
	arr[i] = '\0';
	ft_strrev(arr);
	arr[i] = '\0';
	return (ft_strdup(arr));
}
