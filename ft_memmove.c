/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aougdal <aougdal@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/16 22:32:21 by aougdal           #+#    #+#             */
/*   Updated: 2019/10/22 21:11:00 by aougdal          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *str1, const void *str2, size_t n)
{
	unsigned char	*s2;
	unsigned char	*lasts2;
	unsigned char	*s1;
	unsigned char	*lasts1;

	s1 = (unsigned char*)str1;
	s2 = (unsigned char*)str2;
	if (!str1 && !str2)
		return (NULL);
	if (s1 < s2)
	{
		while (n--)
			*s1++ = *s2++;
	}
	else
	{
		lasts1 = s1 + n - 1;
		lasts2 = s2 + n - 1;
		while (n--)
			*lasts1-- = *lasts2--;
	}
	return (str1);
}
