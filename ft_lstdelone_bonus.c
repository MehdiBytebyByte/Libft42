/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstdelone_bonus.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mboughra <mboughra@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/13 11:29:28 by mboughra          #+#    #+#             */
/*   Updated: 2023/11/17 19:36:17 by mboughra         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstdelone(t_list *lst, void (*del)(void*))
{
	if (!lst || !del)
		return ;
	if (lst && del)
	{
		del (lst->content);
		free (lst);
	}
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
// 	root->next->next = NULL;
// 	current = root;
// 	while (current)
// 	{
// 		printf("%s\n",current->content);
// 		current = current-> next;	
// 	}
// 	printf("\ndeleting...\n\n");
// 	ft_lstdelone(root->next,del);

// 	current = root;
// 	while (current)
// 	{
// 		printf("%s\n",current->content);
// 		current = current-> next;	
// 	}
// 	return 0;
// }