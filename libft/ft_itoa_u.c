/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa_u.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bsanaoui <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/11/26 21:04:58 by bsanaoui          #+#    #+#             */
/*   Updated: 2019/11/26 21:04:59 by bsanaoui         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libftprintf.h"

static int			len_num(unsigned int abs_nb)
{
	int		count;

	count = 0;
	while (abs_nb)
	{
		abs_nb /= 10;
		++count;
	}
	return (count);
}

static char			*cpy_nbr(char *str, unsigned int nbr, int i)
{
	long	div;

	div = 1;
	if (nbr == 0)
	{
		str[i++] = '0';
		str[i] = '\0';
		return (str);
	}
	while ((nbr / div) != 0)
		div *= 10;
	div /= 10;
	while (div > 0)
	{
		str[i++] = nbr / div + '0';
		nbr %= div;
		div /= 10;
	}
	str[i] = '\0';
	return (str);
}

static unsigned int	ft_abs2(unsigned int n)
{
	if (n == 0)
		return (1);
	return (n);
}

char				*ft_itoa_u(unsigned int n)
{
	char			*str;
	int				i;
	unsigned int	nbr;

	i = 0;
	nbr = n;
	if (!(str = (char *)malloc(len_num(ft_abs2(n)) + 1)))
		return (NULL);
	str = cpy_nbr(str, nbr, i);
	return (str);
}
