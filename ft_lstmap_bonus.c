/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap_bonus.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mboughra <mboughra@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/15 17:57:27 by mboughra          #+#    #+#             */
/*   Updated: 2023/11/17 18:19:44 by mboughra         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstmap(t_list *lst, void *(*f)(void *), void (*del)(void *))
{
	t_list	*element;
	t_list	*ret;
	void	*holder;

	if (!lst || !del || !f)
		return (NULL);
	ret = NULL;
	while (lst)
	{
		holder = f(lst->content);
		element = ft_lstnew(holder);
		if (!element)
		{
			ft_lstclear(&ret, del);
			free(holder);
			return (NULL);
		}
		ft_lstadd_back(&ret, element);
		lst = lst->next;
	}
	return (ret);
}
// void *f(void *p)
// {
// 	int i = 0;
// 	char *str = (char *)p;
// 	while (str[i])
// 	{
// 		str[i] += 1;
// 		i++;
// 	}
// 	return(str);
// }
// void del(void *content)
// {
// 	free(content);
// }

// int main(void)
// {
// 	t_list *list,*abc;

// 	list = (t_list *)malloc(sizeof(t_list));
// 	list->content = ft_strdup("123456");
// 	list->next = (t_list *)malloc(sizeof(t_list));
// 	list->next->content = ft_strdup("78");
// 	list->next->next = NULL;
// 	abc = ft_lstmap(list,&f,&del);
// 	while (abc)
// 	{
// 		printf("%s",abc->content);
// 		abc = abc->next;
// 	}
	
// }
