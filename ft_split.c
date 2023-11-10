/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mboughra <mboughra@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/06 16:30:25 by mboughra          #+#    #+#             */
/*   Updated: 2023/11/10 14:39:48 by mboughra         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

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


static void coppier(char *dest, char *src , int t,char c)
{
    int i = 0;
	int j = 0;
	while(src[i] == c)
		i++;
	while (j < t)
	{
    dest[j] = src[i];
	j++;
	i++;
	}
	dest[t] = '\0';
}
static char	*allocater(char	*str, char	c,int *i)
{
	char	*copy;
	int		t;
	int		originali = *i;
	
	t = 0;
	while ((str[*i]) == c)
		(*i)++;
	while (str[*i] && str[*i] != c)
	{
		t++;
		(*i)++;
	}
	// if(t != 0)
		copy = (char *)malloc(sizeof(char) * (t + 1));
	if (!copy)
		return (NULL);
	coppier(copy, str + originali, t ,c);
	return(copy);
}
char **ft_split(char const *s, char c)
{
	int		j;
	int		i;
	int 	sub;
	char	**ret;

	j = 0;
	i = 0;
	if(!s)
		return(NULL);
	sub = ft_subscounter(s,c);
	ret = (char **)malloc(sizeof(char *) * (sub + 1));
	if (!ret)
		return (NULL);
	while (j < sub)
	{
		ret[j] = allocater((char *)s,c,&i);
		if (ret[j] == (NULL))
		{
			while (j-- >= 0)
				free(ret[j--]);
			free(ret);
			return(NULL);
		}
		j++;
	}
	return(ret);
}

// int main()
// {
//     char s[] = ".....hello.world.l.13.";
//     char c = '.';
// 	int		i;
//     char **result = ft_split(s, c);
	
// 	printf("number of subs is %d\n",ft_subscounter(s,c));

// 	i  = 0;
// 	while (result[i] != NULL)
//     {
//         printf("%s\n", result[i]);
//         free(result[i]);
//         i++;
//     }
// }
	