/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mboughra <mboughra@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/15 17:57:27 by mboughra          #+#    #+#             */
/*   Updated: 2023/11/15 20:34:16 by mboughra         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstmap(t_list *lst, void *(*f)(void *), void (*del)(void *))
{
	t_list	*current;
	if (!lst || !del)
		return (NULL);
	current = lst;
	ft_lstnew(lst->content);
	while(current)
	{
		
	}
}

/* check if lst or f or del is NULL */
/* loop over lst */
    /* create a new element */
    /* if new elem is null, clear the new list */
/* add the new element to the back of the list */
/* finally, return the new list */