/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstclear_bonus.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mboughra <mboughra@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/13 14:00:47 by mboughra          #+#    #+#             */
/*   Updated: 2023/11/21 17:51:25 by mboughra         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstclear(t_list **lst, void (*del)(void*))
{
	t_list	*current;
	t_list	*holder;

	if (!lst || !del)
		return ;
	current = *lst;
	while (current != NULL)
	{
		holder = current->next;
		del(current->content);
		free(current);
		current = holder;
	}
	*lst = NULL;
}
