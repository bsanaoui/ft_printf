/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   conversion_string.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bsanaoui <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/11/18 17:51:01 by bsanaoui          #+#    #+#             */
/*   Updated: 2019/11/18 17:51:03 by bsanaoui         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libftprintf.h"

static void		null_string(char **s, int *preci)
{
	if (*preci == -1)
		*s = ft_strdup("");
	else
		*s = ft_strdup("(null)");
}

static int		cas_preci(char **s, int preci, int *a)
{
	char *tmp;

	if (preci == -1)
	{
		*s = ft_strdup("");
		*a = 1;
	}
	else if (preci != 0 && preci > 0)
	{
		tmp = *s;
		if (!(*s = ft_substr(*s, 0, ft_abs(preci))))
			return (-1);
		ft_free(&tmp, *a);
		*a = 1;
	}
	return (ft_strlen(*s));
}

int				conversion_string(va_list args, char *fmt, int width, int preci)
{
	int		len_string;
	int		a;
	char	*s;

	a = 0;
	s = (char *)va_arg(args, char *);
	if (s == NULL)
	{
		null_string(&s, &preci);
		a = 1;
	}
	len_string = ft_strlen(s);
	if (ft_abs(preci) < len_string)
	{
		len_string = cas_preci(&s, preci, &a);
	}
	if (ft_abs(width) <= len_string)
	{
		ft_putstr(s);
		width = len_string;
	}
	else
		print_string(s, ft_abs(width) - len_string, sign_flag(width, *fmt));
	ft_free(&s, a);
	return (ft_abs(width));
}
