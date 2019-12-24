/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   zero_to_nb.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bsanaoui <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/11/26 18:32:30 by bsanaoui          #+#    #+#             */
/*   Updated: 2019/11/26 18:32:32 by bsanaoui         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libftprintf.h"

int		zero_to_nb(char **nb, int nb_zero)
{
	char *arr_zero;
	char *tmp;

	if (!(arr_zero = (char *)malloc(nb_zero * sizeof(char) + 1)))
		return (-1);
	ft_zero(&arr_zero, nb_zero);
	if (*(*nb) == '-')
	{
		*arr_zero = '-';
		*(*nb) = '0';
	}
	tmp = *nb;
	if (!(*nb = ft_strjoin(arr_zero, tmp)))
		return (-1);
	free(tmp);
	ft_free(&arr_zero, 1);
	return (ft_strlen(*nb));
}
