/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   len_nb.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bsanaoui <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/11/28 18:39:08 by bsanaoui          #+#    #+#             */
/*   Updated: 2019/11/28 18:39:09 by bsanaoui         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libftprintf.h"

int		len_nbr(int nb)
{
	int		len;
	char	*tmp;

	if (!(tmp = ft_itoa(nb)))
		return (-1);
	len = ft_strlen(tmp);
	ft_free(&tmp, 1);
	return (len);
}
