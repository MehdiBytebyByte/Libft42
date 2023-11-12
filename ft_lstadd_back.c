/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstadd_back.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mboughra <mboughra@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/12 15:48:40 by mboughra          #+#    #+#             */
/*   Updated: 2023/11/12 17:22:44 by mboughra         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstadd_back(t_list **lst, t_list *new)
{
	t_list  *current;

	current = *lst;
	if(!current)
	{
		*lst = new;
		return;
	}
	while (current->next != NULL)
	{
		current = current->next;
	}
	current->next = new;
}

// int	main(void)
// {
// 	t_list *root, *new;
// 	root = malloc(sizeof(t_list));
// 	root->content = ft_strdup("salam ");
// 	root->next = malloc(sizeof(t_list));
// 	root->next->content = ft_strdup("labas ");
// 	root->next->next = NULL;
	
// 	t_list *current;
// 	current = root;
// 	while (current)
// 	{
// 		printf("%s",(char *)current->content);
// 		current = current->next;
// 	}
	
	
// 	int d = ft_lstsize(root);
// 	printf("\nbefore adding the last one the size is = %d\n",d);
	
// 	new = malloc(sizeof(t_list));
// 	new->content = ft_strdup("3lik");
// 	new->next = NULL;
	
// 	ft_lstadd_back(&root,new);
// 	current = root;
// 	while (current)
// 	{
// 		printf("%s",(char *)current->content);
// 		current = current->next;
// 	}

// 	int c = ft_lstsize(root);
// 	printf("\nbefore adding the last one the size is = %d\n",c);

// }