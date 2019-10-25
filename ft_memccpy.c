/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memccpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aougdal <aougdal@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/16 13:52:51 by aougdal           #+#    #+#             */
/*   Updated: 2019/10/21 00:07:30 by aougdal          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memccpy(void *dest, const void *src, int c, size_t n)
{
	size_t			i;
	unsigned char	*s;
	unsigned char	*d;

	s = (unsigned char*)src;
	d = (unsigned char*)dest;
	i = 0;
	while (*s != (unsigned char)c && i < n)
	{
		*d++ = *s++;
		i++;
	}
	if (*s == (unsigned char)c)
	{
		*d = (unsigned char)c;
		return (d + 1);
	}
	return (NULL);
}
