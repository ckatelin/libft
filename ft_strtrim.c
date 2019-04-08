/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ckatelin <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/04/05 21:17:48 by ckatelin          #+#    #+#             */
/*   Updated: 2019/04/08 16:56:26 by ckatelin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char		*ft_strtrim(char const *s)
{
	size_t	i;
	size_t	j;
	size_t	len;
	char	*mas;
	char	*del;

	del = ft_memalloc(sizeof(char));
	i = 0;
	len = 0;
	j = 0;
	if (!s)
		return (NULL);
	while (s[i] == ' ' || s[i] == '\t' || s[i] == '\n')
		i++;
	while (s[len])
		len++;
	if (len == i)
		return (del);
	len--;
	while (s[len] == ' ' || s[len] == '\t' || s[len] == '\n')
		len--;
	len++;
	mas = (char *)malloc(sizeof(char) * (len - i + 1));
	if (!mas)
		return (NULL);
	while (i < len)
		mas[j++] = s[i++];
	mas[j] = '\0';
	return (mas);
}
