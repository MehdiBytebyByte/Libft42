/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstnew.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mboughra <mboughra@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/11 19:00:51 by mboughra          #+#    #+#             */
/*   Updated: 2023/11/15 20:30:52 by mboughra         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstnew(void *content)
{
	t_list	*e1;

	e1 = malloc(sizeof(t_list));
	if (!e1)
		return (NULL);
	e1->content = content;
	e1->next = NULL;
	return (e1);
}
