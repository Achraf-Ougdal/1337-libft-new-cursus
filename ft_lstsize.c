/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstsize.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aougdal <aougdal@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/19 14:56:42 by aougdal           #+#    #+#             */
/*   Updated: 2019/10/21 21:28:32 by aougdal          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int		ft_lstsize(t_list *lst)
{
	int		count;
	t_list	*temp;

	count = 0;
	if (lst)
	{
		temp = lst;
		while (temp != NULL)
		{
			count++;
			temp = temp->next;
		}
	}
	return (count);
}
