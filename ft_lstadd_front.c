/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstadd_front.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mboughra <mboughra@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/11 21:40:52 by mboughra          #+#    #+#             */
/*   Updated: 2023/11/12 15:13:49 by mboughra         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstadd_front(t_list **lst, t_list *new)
{
	new->next = *lst;
	*lst = new;
}
// int main(void)
// {
// 	t_list *root,*new;
// 	root = malloc(sizeof(t_list));	
// 	root->content = ft_strdup("abc");
// 	root->next = malloc(sizeof(t_list));
// 	root->next-> content =ft_strdup("def");
// 	root->next->next = malloc(sizeof(t_list));
// 	root->next->next->content = ft_strdup("ijk");
// 	root->next->next->next = NULL;

// 	new = malloc(sizeof(t_list));
// 	new->content = strdup("yes");
// 	new->next = NULL;
// 	ft_lstadd_front(&root,new); //fix this
// 	int count = 0;
// 	t_list *current;
// 	current = root;
// 	while (current)
// 	{
// 		count++;
// 		printf("%s\n",current->content);
// 		current = current -> next;
// 	}
// 	printf("the amount of nodes are %d",count);
// }