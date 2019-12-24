/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrev.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bsanaoui <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/01 18:42:45 by bsanaoui          #+#    #+#             */
/*   Updated: 2019/09/01 18:51:23 by bsanaoui         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libftprintf.h"

char	*ft_strrev(char *str)
{
	int		begin;
	char	temp;
	int		end;

	begin = 0;
	end = ft_strlen(str) - 1;
	while (begin < end)
	{
		temp = str[end];
		str[end] = str[begin];
		str[begin] = temp;
		begin++;
		end--;
	}
	return (str);
}
