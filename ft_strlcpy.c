/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aougdal <aougdal@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/16 23:03:23 by aougdal           #+#    #+#             */
/*   Updated: 2019/10/23 00:17:09 by aougdal          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t		ft_strlcpy(char *destination, const char *source, size_t size)
{
	const char	*src;
	char		*dst;
	size_t		len;

	src = source;
	dst = destination;
	len = size;
	if (!destination || !source)
		return (0);
	if (len == 0)
		return (ft_strlen(src));
	while (--len && *src)
	{
		*dst = *src;
		dst++;
		src++;
	}
	if (*dst)
		*dst = '\0';
	while (*src)
	{
		src++;
	}
	return (ft_strlen(source));
}
