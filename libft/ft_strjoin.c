/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bsanaoui <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/13 19:05:43 by bsanaoui          #+#    #+#             */
/*   Updated: 2019/10/13 19:05:45 by bsanaoui         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libftprintf.h"

char	*ft_strjoin(char const *s1, char const *s2)
{
	char	*newstr;
	int		i;
	int		j;

	if (!s1 || !s2)
		return (NULL);
	i = ft_strlen((char *)s1);
	j = 0;
	if (!(newstr = (char *)malloc((i + ft_strlen((char *)s2) + 1)
		* sizeof(char))))
		return (NULL);
	else
	{
		ft_memcpy(newstr, s1, i + 1);
		while (s2[j] != '\0')
		{
			newstr[i] = s2[j];
			i++;
			j++;
		}
		newstr[i] = '\0';
	}
	return (newstr);
}
