/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmapi.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mboughra <mboughra@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/10 20:14:20 by mboughra          #+#    #+#             */
/*   Updated: 2023/11/21 18:14:44 by mboughra         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strmapi(char const *s, char (*f)(unsigned int, char))
{
	size_t	len;
	size_t	i;
	char	*re;

	if (s == NULL)
		return (NULL);
	len = ft_strlen(s);
	re = (char *)malloc(sizeof(char) * (len + 1));
	if (!re)
		return (NULL);
	i = 0;
	while (i < len)
	{
		re[i] = (*f)(i, s[i]);
		i++;
	}
	re[i] = '\0';
	return (re);
}
// void	del(void *content)
// {
// 	free(content);
// }
// #include <stdio.h>

// int	main(void)
// {
// 	t_list *root;

// 	root = (t_list*)malloc(sizeof(t_list));

// 	root->content = ft_strdup("test");
// 	root->next = ((t_list*)malloc(sizeof(t_list)));
// 	root->next->content = ft_strdup("hello");
// 	root->next->next = ((t_list*)malloc(sizeof(t_list)));
// 	root->next->next->content = (ft_strdup("broski"));
// 	root->next->next->next = NULL;

// 	t_list *current;
// 	t_list *abc = ft_lstnew("jadid");

	
// 	// ft_lstadd_back(&root,abc);
// 	ft_lstclear(&root,del);
// 	current = root;
// 	while (current)
// 	{
// 		printf("%s\n",current->content);
// 		current = current->next;
// 	}
	
// }
