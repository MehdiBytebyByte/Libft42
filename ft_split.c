/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mboughra <mboughra@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/06 16:30:25 by mboughra          #+#    #+#             */
/*   Updated: 2023/11/08 13:54:13 by mboughra         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

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
char *allocopy(*str,c,len)
{
	str = (char *)malloc(len);
	if(!str)
		return(NULL);
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
	ret = (char **)malloc(subs + 1);
	if(!ret)
		return(NULL);
	start = 0;
	while(s[end])
	{
		while(s[end] != c)
			end++;
	
	}
}

int main()
{
	printf("%d",ft_subscounter("welcome to the summoners rift",'m'));
}
	// *(ret+j) == ret[j]