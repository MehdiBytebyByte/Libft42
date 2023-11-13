/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mboughra <mboughra@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/06 16:30:25 by mboughra          #+#    #+#             */
/*   Updated: 2023/11/13 20:38:01 by mboughra         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char *eyecopy(char *str, char *ret,size_t size)
{
	size_t i;
	i = 0;
	
	while (i < size)
	{
		ret[i] = str[i + size];
		i++;
	}
	ret[i] = '\0';
}


static int	ft_subscounter(const char *str, char c)
{
	int	count;
	int	i;

	i = 0;
	count = 0;
	while (str[i])
	{
		if (str[i] != c ){
			count++;
		while (str[i] != c && str[i])
			i++;}
		while (str[i] == c)
			i++;
	}
	if (count == 0)
		return (1);
	return (count);
}
static int	ft_subslen(const char *str, char c,int *i)
{
	int	size;

	size = 0;
	
	while(str[*i] == c)
			(*i)++;
	while(str[*i] && str[*i] != c)
	{
		size++;
		(*i)++;
	}
	return (size);
}
char **ft_split(char const *s, char c)
{
	size_t size;
	size_t i;
	size_t j;
	char **ret;
	
	i = 0;
	j = 0;
	size = ft_subscounter(s,c);
	ret = (char **)malloc(sizeof(char *) * (size + 1));
	if(!ret)
		return(NULL);
	while(i < size + 1)
	{
		ret[j] = (char *)malloc(sizeof(ft_subslen(s,c,&i)) + 1);
		if(!ret[j])
		{
			while(j-- > 0)
			{
				free[ret[j]];
			}
			free[ret];
		}
		eyecopy(str,ret[j],ft_subslen(s,c,&i) + 1);
		// give i it's new vallue
	}
	
return(ret);
}
int	main(void)
{
	char *a = "..abc...c.d.c.d...";
	char b = '.';
	int  i = 0;
	printf("%d",ft_subslen(a,b,&i));
}