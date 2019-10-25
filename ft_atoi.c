/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aougdal <aougdal@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/16 23:59:16 by aougdal           #+#    #+#             */
/*   Updated: 2019/10/23 00:17:57 by aougdal          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int		ft_atoi(const char *str)
{
	unsigned int		ret;
	int					flag;

	ret = 0;
	flag = 0;
	while (*str && (*str == ' ' || *str == '\n' || *str == '\t' ||
	*str == '\v' || *str == '\f' || *str == '\r'))
		str++;
	if (*str == '-')
		flag = 1;
	if (*str == '+' || *str == '-')
		str++;
	while (*str && *str >= '0' && *str <= '9')
	{
		ret = ret * 10;
		ret = ret + (*str - '0');
		str++;
	}
	if (flag)
		return ((int)-ret);
	return (ret);
}
