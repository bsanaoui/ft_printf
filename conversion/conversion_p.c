/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   conversion_p.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bsanaoui <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/11/26 21:18:14 by bsanaoui          #+#    #+#             */
/*   Updated: 2019/11/26 21:18:17 by bsanaoui         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libftprintf.h"

static int		to_hexa_dec(char **nb, va_list args, int preci)
{
	char	*tmp;
	char	*tmp2;

	tmp = to_hexa((long long)va_arg(args, void *), 0);
	if (*tmp == '0' && preci == -1)
	{
		*nb = ft_strdup("0x");
		return (ft_strlen(*nb));
	}
	tmp2 = ft_strdup("0x");
	if (!(*nb = ft_strjoin(tmp2, tmp)))
		return (-1);
	ft_free(&tmp, 1);
	ft_free(&tmp2, 1);
	return (ft_strlen(*nb));
}

int				conversion_p(va_list args, char *fmt, int width, int preci)
{
	char	*nb;
	int		len_nb;

	if (!(len_nb = to_hexa_dec(&nb, args, preci)))
		return (-1);
	if (preci >= len_nb + 2)
	{
		if (*nb == '-')
			len_nb = zero_to_nb(&nb, preci - len_nb + 1);
		else
			len_nb = zero_to_nb(&nb, preci - len_nb);
	}
	if (ft_abs(width) > len_nb && *fmt == '0' &&
		*(fmt + len_nbr(width) + 1) == '.')
		print_d(nb, ft_abs(width) - len_nb, '+');
	else if (ft_abs(width) > len_nb)
		print_d(nb, ft_abs(width) - len_nb, sign_flag(width, *fmt));
	if (len_nb >= ft_abs(width) && len_nb >= preci)
		ft_putstr(nb);
	ft_free(&nb, 1);
	return (ft_max((int[]){ft_abs(width), preci, len_nb}, 3));
}
