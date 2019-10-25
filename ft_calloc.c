/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aougdal <aougdal@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/17 22:52:33 by aougdal           #+#    #+#             */
/*   Updated: 2019/10/22 22:06:39 by aougdal          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_calloc(size_t nitems, size_t size)
{
	void			*ret;
	size_t			i;

	i = 0;
	if (!(ret = malloc(nitems * size)))
		return (NULL);
	ft_bzero(ret, nitems * size);
	return (ret);
}
