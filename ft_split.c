/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mboughra <mboughra@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/06 16:30:25 by mboughra          #+#    #+#             */
/*   Updated: 2023/11/07 00:20:08 by mboughra         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int ft_subscounter(char *str, char c)
{
	int i;
	int j;
	
	j = 0;
	i = 0;
	while (str[i])
	{
		if(str[i] == c && str[i+1] != c && i != 0 && str[i+1] != '\0')
			j++;
	i++;
	}
	return j;
}


// #include <stdio.h>
// char	**ft_split(char const *s, char c)
// {
// 	if (!s || c == '\0')
// 		return(NULL);
	
// }


int	main(void)
{
	printf("%d",ft_subscounter("gleague of leggggends is a video gameggggg",'g'));		
}