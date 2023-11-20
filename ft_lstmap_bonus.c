/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap_bonus.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mboughra <mboughra@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/15 17:57:27 by mboughra          #+#    #+#             */
/*   Updated: 2023/11/18 09:32:36 by mboughra         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstmap(t_list *lst, void *(*f)(void *), void (*del)(void *))
{
	t_list	*element;
	t_list	*ret;
	void	*holder;

	if (!lst || !del || !f)
		return (NULL);
	ret = NULL;
	while (lst)
	{
		holder = f(lst->content);
		element = ft_lstnew(holder);
		if (!element)
		{
			ft_lstclear(&ret, del);
			free(holder);
			return (NULL);
		}
		ft_lstadd_back(&ret, element);
		lst = lst->next;
	}
	return (ret);
}
