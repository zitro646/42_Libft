/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstsize_bonus.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mortiz-d <mortiz-d@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/12 18:09:21 by mortiz-d          #+#    #+#             */
/*   Updated: 2021/12/20 14:37:41 by mortiz-d         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_lstsize(t_list *lst)
{
	int	count;

	if (lst != 0)
	{
		count = 1;
		while (lst->next != 0)
		{	
			//printf("Content : %i\n",lst->content);
			lst = lst->next;
			count++;
		}
		return (count);
	}
	return (0);
}
