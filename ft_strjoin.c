/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ckatelin <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/04/05 20:47:16 by ckatelin          #+#    #+#             */
/*   Updated: 2019/04/08 16:10:14 by ckatelin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char		*ft_strjoin(char const *s1, char const *s2)
{
	size_t	i;
	size_t	j;
	char	*mas;
	size_t	len1;
	size_t	len2;

	if (!s1 || !s2)
		return (NULL);
	mas = ft_strnew((len1 = ft_strlen(s1)) + (len2 = ft_strlen(s2)));
	if (mas)
	{
		i = 0;
		while (i < len1)
		{
			*(mas + i) = *(s1 + i);
			i++;
		}
		j = 0;
		while (j < len2)
		{
			*(mas + i) = *(s2 + j);
			i++;
			j++;
		}
		return (mas);
	}
	else
		return (NULL);
}
