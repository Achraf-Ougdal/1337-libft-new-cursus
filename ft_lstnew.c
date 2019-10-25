/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstnew.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aougdal <aougdal@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/19 14:42:30 by aougdal           #+#    #+#             */
/*   Updated: 2019/10/23 00:18:11 by aougdal          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstnew(void *content)
{
	t_list	*out;

	if (!(out = (t_list*)malloc(sizeof(t_list))))
		return (NULL);
	out->content = content;
	out->next = NULL;
	return (out);
}
