/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa_long.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bsanaoui <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/11/26 21:50:30 by bsanaoui          #+#    #+#             */
/*   Updated: 2019/11/26 21:50:32 by bsanaoui         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libftprintf.h"

static int	len_num(int abs_nb, int n)
{
	int		count;

	count = 0;
	if (n < 0)
		count++;
	while (abs_nb)
	{
		abs_nb /= 10;
		++count;
	}
	return (count);
}

static char	*cpy_nbr(char *str, long nbr, int i)
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

static long	ft_abs2(long n)
{
	if (n < 0)
		return (n * (-1));
	if (n == 0)
		return (1);
	return (n);
}

char		*ft_itoa_long(long n)
{
	char	*str;
	int		i;
	long	nbr;

	i = 0;
	nbr = n;
	if (!(str = (char *)malloc(len_num(ft_abs2(n), n) + 1)))
		return (NULL);
	str = cpy_nbr(str, nbr, i);
	return (str);
}
