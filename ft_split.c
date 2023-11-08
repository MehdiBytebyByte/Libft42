/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mboughra <mboughra@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/06 16:30:25 by mboughra          #+#    #+#             */
/*   Updated: 2023/11/08 15:26:14 by mboughra         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"


// char *ft_freeme(char **str, int i)
// {
// 	if(str[i])	
// }



int ft_subscounter(char *str, char c)
{
	int count;
	int i;

	i = 0;
	count = 0;
	while (str[i])
	{
		if(str[i] != c && i != 0 && str[i-1] == c )
			count++;
		i++;
	}
	if(str[0] != c && str[1] != c)
		count++;
	if(count == 0)
		return(1);
	return count;
}
char *allocopy(char *str,char c,int len)
{
	char *copy;
	int i;
	i = 0;
	copy = (char *)malloc(sizeof(char)*len);
	if(!copy)
		return(NULL);
	while(i < len -1)
	{
		copy[i] = str[i];
		i++;
	}

	copy[i] = '\0';
	return(copy);
}

#include <stdio.h>
char	**ft_split(char const *s, char c)
{
	char **ret;
	int	subs;
	int start;
	int end;
	int i;
	
	if (!s || c == '\0')
		return(NULL);
	subs = ft_subscounter((char *)s,c);
	ret = malloc(sizeof(char *) * (subs + 1));
	if(!ret)
		return(NULL);
	start = 0;
	end = 0;
	i = 0;
	while(i <= subs)
	{
		while(s[end] && s[end] != c)
			end++;
		ret[i] = allocopy(((char *)s + start),c,(end - start) +1);
		if(!ret[i])
		{
			//adding a function that frees here later
			return(NULL);
		}
		start = end + 1;
		end = start;
		i++;
		}
		ret[i] = NULL;
		return(ret);
}
int main()
{
    char s[] = "ap,pl,,,, ad ,aa,,ds,d,sd,sd, d,s d,s,e";
    char c = ',';

    char **result = ft_split(s, c);

    for (int i = 0; result[i] != NULL; i++) 
    {
        printf("%d: %s\n", i, result[i]);
    }
}
	// *(ret+j) == ret[j]