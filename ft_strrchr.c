/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aougdal <aougdal@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/16 23:42:12 by aougdal           #+#    #+#             */
/*   Updated: 2019/10/23 00:20:25 by aougdal          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *str, int c)
{
	int		i;
	int		p;
	int		len;
	char	*string;
	char	ch;

	i = 0;
	p = -1;
	len = ft_strlen(str);
	string = (char *)str;
	ch = (char)c;
	while (i <= len)
	{
		if (string[i] == ch)
			p = i;
		i++;
	}
	if (p != -1)
		return (string + p);
	return (NULL);
}
