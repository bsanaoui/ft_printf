/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   conversion_d.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bsanaoui <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/11/23 18:52:01 by bsanaoui          #+#    #+#             */
/*   Updated: 2019/11/23 18:52:03 by bsanaoui         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libftprintf.h"

static int		preci_zero(char **nb, int preci, int len_nb)
{
	if (*(*nb) == '-')
		return (zero_to_nb(&(*nb), preci - len_nb + 1));
	else
		return (zero_to_nb(&(*nb), preci - len_nb));
}

static int		cas_zero(char **nb, int preci, int width, char *fmt)
{
	if (*(*nb) == '0' && preci == -1 && width == 0)
		return (ft_free(&(*nb), 1));
	if (*(*nb) == '0' && preci == -1)
		*nb = ft_strdup(" ");
	if (preci < -1 && *fmt == '0' && width >= 0)
		print_d(*nb, ft_abs(width) - ft_strlen(*nb), '0');
	else if ((preci < 0 && width < 0) && *fmt == '0')
		print_d(*nb, ft_abs(width) - ft_strlen(*nb), '-');
	else if ((preci == -1) && width >= 0 && *fmt == '0')
		print_d(*nb, ft_abs(width) - ft_strlen(*nb), '+');
	return (ft_strlen(*nb));
}

int				conversion_d(va_list args, char *fmt, int width, int preci)
{
	char	*nb;
	int		len_nb;

	if (!(nb = ft_itoa(va_arg(args, int))))
		return (-1);
	if (!(len_nb = cas_zero(&nb, preci, width, fmt)))
		return (0);
	if (preci < 0 && *fmt == '0')
		return (ft_max((int[]){ft_abs(width), preci, ft_strlen(nb)}, 3));
	if (preci >= len_nb)
		len_nb = preci_zero(&nb, preci, len_nb);
	if (ft_abs(width) > len_nb && *fmt == '0' &&
		*(fmt + len_nbr(width) + 1) == '.')
		print_d(nb, ft_abs(width) - len_nb, '+');
	else if (ft_abs(width) > len_nb)
		print_d(nb, ft_abs(width) - len_nb, sign_flag(width, *fmt));
	if (len_nb >= ft_abs(width) && len_nb >= preci)
		ft_putstr(nb);
	if (*nb == ' ' && (preci == -1 || preci == 0) && width == 0)
		return (ft_free(&nb, 1));
	ft_free(&nb, 1);
	return (ft_max((int[]){ft_abs(width), preci, len_nb}, 3));
}
