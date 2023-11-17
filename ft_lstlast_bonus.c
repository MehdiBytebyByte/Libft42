/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstlast_bonus.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mboughra <mboughra@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/12 14:19:56 by mboughra          #+#    #+#             */
/*   Updated: 2023/11/17 19:36:24 by mboughra         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstlast(t_list *lst)
{
	t_list	*temp;

	if (lst == NULL)
		return (NULL);
	temp = lst;
	while (temp->next != NULL)
		temp = temp->next;
	return (temp);
}
// int	main(void)
// {
// 	t_list *root = malloc(sizeof(t_list));
// 	root->content = ft_strdup("abc");
// 	root->next = malloc(sizeof(t_list));
// 	root->next->content = ft_strdup("def");
// 	root->next->next = NULL;
// 	ft_lstlast(root);
// 	t_list *current;
// // t_list *lastNode = ft_lstlast(root);
// //     printf("Last Node Content: %s\n", (char *)lastNode->content);

// 	current = root;
// 	while (current)
// 	{
// 		printf("%s",current->content);
// 		current = current->next;
// 	}
// }