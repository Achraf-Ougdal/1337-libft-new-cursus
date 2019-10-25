/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstlast.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aougdal <aougdal@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/19 15:19:04 by aougdal           #+#    #+#             */
/*   Updated: 2019/10/21 22:00:06 by aougdal          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstlast(t_list *lst)
{
	t_list	*temp;

	if (lst)
	{
		temp = lst;
		while (temp->next != NULL)
		{
			temp = temp->next;
		}
		return (temp);
	}
	else
		return (NULL);
}
