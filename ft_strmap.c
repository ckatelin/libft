/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ckatelin <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/04/05 20:12:26 by ckatelin          #+#    #+#             */
/*   Updated: 2019/04/05 20:29:56 by ckatelin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char		*ft_strmap(char const *s, char (*f)(char))
{
	size_t	i;
	char	*s1;

	i = 0;
	while (s[i])
		i++;
	s1 = ft_strnew(i);
	if (s1)
	{
		i = 0;
		while (s[i])
		{
			s1[i] = (*f)(s[i]);
			i++;
		}
		s1[i] = '\0';
	}
	return (s1);
}
