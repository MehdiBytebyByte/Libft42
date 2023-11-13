/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstiter.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mboughra <mboughra@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/13 17:01:23 by mboughra          #+#    #+#             */
/*   Updated: 2023/11/13 17:12:39 by mboughra         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void ft_lstiter(t_list *lst, void (*f)(void *))
{
	t_list *current;
	current = lst;
	while(current)
	{
		f(current->content);
		current = current->next;
	} 
}
// void f(void *p)
// {
// 	printf("%s",(char *)p);
// }

// int main(void)
// {
// 	t_list *root;

// 	root = malloc(sizeof(t_list));
// 	root->content = ft_strdup("hello");
// 	root->next = malloc(sizeof(t_list));
// 	root->next->content = ft_strdup (" world");
// 	root->next->next = NULL;
// 	ft_lstiter(root,f);
// }