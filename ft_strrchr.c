/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mboughra <mboughra@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/31 19:30:08 by mboughra          #+#    #+#             */
/*   Updated: 2023/11/12 10:19:42 by mboughra         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <string.h>
#include "libft.h"

char	*ft_strrchr(const char *s, int c)
{
	size_t			i;
	unsigned char	*str;
	unsigned char	c_char;

	i = ft_strlen(s);
	str = (unsigned char *)s;
	c_char = (unsigned char)c;
	if (c_char == '\0')
		return ((char *)&str[i]);
	while (i > 0)
	{
		i--;
		if (str[i] == c_char)
			return ((char *)&str[i]);
	}
	return (NULL);
}

// int	main(void)
// {

// 	char str[] = "33 alf salam al3alam";
// 	char tofind = '\0';
// 	printf("my str %s\n",ft_strrchr(str,tofind);
// 	printf("original %s\n",strrchr(str,tofind);
// 	return 0;	
// }
