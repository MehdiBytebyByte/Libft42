/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstadd_front.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mboughra <mboughra@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/11 21:40:52 by mboughra          #+#    #+#             */
/*   Updated: 2023/11/11 23:05:00 by mboughra         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"


void ft_lstadd_front(t_list **lst, t_list *new)
{
	
}



int main(void)
{
	t_list root;

	root.content = "abc";
	root.next = malloc(sizeof(t_list));
	root.next-> content = "def";
	root.next->next = malloc(sizeof(t_list));
	root.next->next->content = "ijk";
	root.next->next->next = NULL;

	t_list *current;
	current = &root;
	while (current)
	{
		printf("%s\n",current->content);
		current = current -> next;
	}
}