/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstclear.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mboughra <mboughra@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/13 14:00:47 by mboughra          #+#    #+#             */
/*   Updated: 2023/11/15 13:48:20 by mboughra         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstclear(t_list **lst, void (*del)(void*))
{
	t_list	*current;
	t_list	*next;

	if (!lst || !del)
		return ;
	current = *lst;
	while (current != NULL)
	{
		next = current->next;
		del(current->content);
		free(current);
		current = next;
	}
	*lst = NULL;
}
// void del(void *llist)
// {
// 	free(llist);
// }

// int	main(void)
// {
// 	t_list *root,*current;

// 	root = malloc(sizeof(t_list));
// 	root->content = ft_strdup("fight");
// 	root->next = malloc(sizeof(t_list));
// 	root->next->content = ft_strdup("me");
// 	root->next->next = malloc(sizeof(t_list));
// 	root->next->next->content = ft_strdup("if you dare");
// 	root->next->next->next = NULL;

// 	current = root;
// 	while (current)
// 	{
// 		printf("%s\n",current->content);
// 		current = current-> next;	
// 	}
// 	printf("\ndeleting...\n\n");

// 	ft_lstdelone(&root,del);

// 	current = root;
// 	while (current)
// 	{
// 		printf("%s\n",current->content);
// 		current = current-> next;	
// 	}
// }