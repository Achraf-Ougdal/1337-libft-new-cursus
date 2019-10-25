/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aougdal <aougdal@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/17 21:02:04 by aougdal           #+#    #+#             */
/*   Updated: 2019/10/21 19:52:53 by aougdal          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *dest, const char *src, size_t size)
{
	size_t	len;
	size_t	ret;

	len = ft_strlen(dest);
	if (size <= len)
		ret = size + ft_strlen(src);
	else
		ret = len + ft_strlen(src);
	if (size == 0)
		return (ft_strlen(src));
	while (*dest)
		dest++;
	while (*src && len < size - 1)
	{
		*(dest++) = *(src++);
		len++;
	}
	*dest = '\0';
	return (ret);
}
