/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_dup.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ckatelin <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/04/08 14:41:37 by ckatelin          #+#    #+#             */
/*   Updated: 2019/04/08 14:47:06 by ckatelin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_dup(void const *content, size_t content_size)
{
		unsigned char	*str1;
		unsigned char	*str2;
		void			*new;
	
		if (!(new = ft_memalloc(content_size)))
			return (NULL);
		str1 = (unsigned char*)content;
		str2 = (unsigned char*)new;
		while (*str1)
			*(str2++) = *(str1++);
		return (str2);
}
