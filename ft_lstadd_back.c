/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstadd_back.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aougdal <aougdal@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/19 15:49:52 by aougdal           #+#    #+#             */
/*   Updated: 2019/10/22 19:28:20 by aougdal          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstadd_back(t_list **alst, t_list *new)
{
	t_list	*temp;

	if (!new)
		return ;
	if (!*alst)
	{
		*alst = new;
		return ;
	}
	temp = *alst;
	while (temp->next != NULL)
		temp = temp->next;
	temp->next = new;
}
