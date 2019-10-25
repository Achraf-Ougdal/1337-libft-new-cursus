/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aougdal <aougdal@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/19 00:49:13 by aougdal           #+#    #+#             */
/*   Updated: 2019/10/22 20:42:59 by aougdal          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static	int	ft_string_size(int num)
{
	int		count;

	count = 0;
	if (num < 0)
	{
		count++;
		num *= -1;
	}
	while (num > 0)
	{
		count++;
		num = num / 10;
	}
	return (count);
}

char		*ft_itoa(int n)
{
	char	*ret;
	int		len;

	len = ft_string_size(n);
	if (n == 0)
		return (ft_strdup("0"));
	if (n == -2147483648)
		return (ft_strdup("-2147483648"));
	if (!(ret = (char*)malloc(sizeof(char) * len + 1)))
		return (NULL);
	ret[len--] = '\0';
	if (n < 0)
	{
		ret[0] = '-';
		n *= -1;
	}
	while (n > 0)
	{
		ret[len--] = (n % 10) + '0';
		n = n / 10;
	}
	return (ret);
}
