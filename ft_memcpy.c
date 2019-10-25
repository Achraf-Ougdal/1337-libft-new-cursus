/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aougdal <aougdal@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/16 13:26:32 by aougdal           #+#    #+#             */
/*   Updated: 2019/10/22 21:10:50 by aougdal          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memcpy(void *str1, const void *str2, size_t n)
{
	unsigned char	*temp;
	unsigned char	*dest;
	size_t			i;

	i = 0;
	temp = (unsigned char*)str2;
	dest = (unsigned char*)str1;
	if (!str1 && !str2)
		return (NULL);
	while (i < n)
	{
		*dest = *temp;
		temp++;
		dest++;
		i++;
	}
	return (str1);
}
