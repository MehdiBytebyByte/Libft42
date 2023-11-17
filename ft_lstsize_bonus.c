/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstsize_bonus.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mboughra <mboughra@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/12 15:20:42 by mboughra          #+#    #+#             */
/*   Updated: 2023/11/17 19:36:33 by mboughra         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_lstsize(t_list *lst)
{
	t_list	*temp;
	int		count;

	count = 0;
	temp = lst;
	while (temp)
	{
		temp = temp->next;
		count++;
	}
	return (count);
}
// int	main(void)
// {
// 	t_list *root;
// 	root = malloc(sizeof(t_list));
// 	root->content = ft_strdup("abc");
// 	root->next = malloc(sizeof(t_list));
// 	root->next->content = ft_strdup("def");
// 	root->next->next = malloc(sizeof(t_list));
// 	root->next->next->content = ft_strdup("xyz");
// 	root->next->next->next = NULL;

// 	printf("%d",ft_lstsize(root));
// }