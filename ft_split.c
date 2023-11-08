/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mboughra <mboughra@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/06 16:30:25 by mboughra          #+#    #+#             */
/*   Updated: 2023/11/09 00:37:13 by mboughra         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	ft_subscounter(const char *str, char c)
{
	int	count;
	int	i;
	char *str2;

	i = 0;
	count = 0;
	str2 = ft_strtrim(str,&c); // typecast it later inc ase
	while (str2[i])
	{
		if (str2[i] != c )
			count++;
		while (str2[i] != c && str2[i])
			i++;
		while (str2[i] == c)
			i++;
	}
	if (count == 0)
		return (1);
	return (count);
}


static char	*allocater(char	*str, char	c, int *i)
{
	char	*copy;
	char 	*tstr;
	int		t;

	tstr = ft_strtrim(str,&c);
	t = 0;
	
		while ((*i) == c)
			(*i)++;
	while (tstr[*i] && tstr[*i] != c)
	{
		t++;
		(*i)++;
	}
	if(t != 0)
		copy = (char *)malloc(sizeof(char) * (t + 1));
	if (!copy)
		return (NULL);
	return(copy);
}
static char *copier(char *str,char *ret,int *i)
{
	
}
char **ft_split(char const *s, char c)
{
	int		i;
	int		j;
	char	**ret;
	
	j = 0;
	i = 0;
	ret = (char **)malloc(sizeof(char) * (ft_subscounter(s,c) + 1)); //add +1 later
	if (!ret)
		return (NULL);
	while (j <= ft_subscounter(s,c))// or equal
	{
		ret[j] = allocater(s,c,i);	
	}	
}






int main()
{
    char s[] = "...salam...mehdi.cv.cc...l...9...";
    char c = '.';
	// int		i;
    // char **result = ft_split(s, c);

	// i  = 0;
	// while(i < 10)
	// {
    //     printf("%d: %s\n", i, result[i]);
	// 	i++;
    // }
	printf("%d",ft_subscounter(s,c));
}
	// *(ret+j) == ret[j]
// char *allocopy(char *str,char c,int len)
// {
// 	char	*copy;
// 	int			i;

// 	i = 0;
// 	copy = (char *)malloc(sizeof(char)*len);
// 	if(!copy)
// 		return(NULL);
// 	while(i < len -1)
// 	{
// 		copy[i] = str[i];
// 		i++;
// 	}

// 	copy[i] = '\0';
// 	return(copy);
// }

// #include <stdio.h>
// char	**ft_split(char const *s, char c)
// {
// 	char **ret;
// 	char *str;
// 	int	subs;
// 	int start;
// 	int end;
// 	int i;
	
// 	if (!s || c == '\0')
// 		return(NULL);
// 	str = ft_strtrim(s,&c);
// 	subs = ft_subscounter((char *)str,c);
// 	printf("Number of subs is %d\n",subs);
// 	ret = (char **)malloc(sizeof(char *) *(subs + 1));
// 	if(!ret)
// 		return(NULL);
// 	start = 0;
// 	end = 0;
// 	// i = 0;
// 	// while(str[i] != '\0' && i < subs )
// 	// {
// 	// 	while(str[start] && str[end] != c && str[end] != '\0')
// 	// 		end++;
// 	// 	ret[i] = allocopy(((char *)str + start),c,(end - start) +1);
// 	// 	// if(!ret[i])
// 	// 	// {
// 	// 	// 	//adding a function that frees here later
// 	// 	// 	return(NULL);
// 	// 	// }
// 	// 	start = end;
// 	// 	while(str[start] == c)
// 	// 		str++;
// 	// 	end = start;
// 	// 	i++;
// 	// }
// 	// ret[i] = NULL;
// 	i = 0;
// while (str[i] && i < subs)
// {
//     while (str[start] && str[end] != c && str[end] != '\0')
//         end++;
//     ret[i] = allocopy(((char *)str + start), c, (end - start) + 1);
//     if (!ret[i])
//     {
  
//     }
//     start = end;
//     while (str[start] == c)
//         start++; 
//     end = start;
//     i++; 
// }
// ret[i] = NULL;
// 	return(ret);
// char *ft_freeme(char **str, int i)
// {
// 	if(str[i])	
// }

// }