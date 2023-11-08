/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mboughra <mboughra@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/03 13:44:54 by mboughra          #+#    #+#             */
/*   Updated: 2023/11/05 14:18:00 by mboughra         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

// kndwro 3la needle fhaystack ta kal9aw klma kamla or ( i tkbr 3la len )
// else dima NULL

char	*ft_strnstr(const char	*haystack, const char	*needle, size_t	len)
{
	size_t	i;
	size_t	j;

	i = 0;
	if (needle[i] == '\0')
		return ((char *)haystack);
	while (haystack[i])
	{
		j = 0;
		while (haystack[i + j] == needle[j] 
			&& (i + j) < len)
		{
			if (needle[j + 1] == '\0')
				return ((char *)(haystack + i));
			j++;
		}
		i++;
	}
	return (NULL);
}

// #include<string.h>

// int	main(void)
// {
// 	char *haystack = "foo bar baz";
// 	char *needle = "ba";
// 	printf("%s\n",strnstr(haystack,needle,6));
// 	char *haystack2= "foo bar baz";
// 	char *needle2 = "ba";
// 	printf("%s",ft_strnstr(haystack2,needle2,6));
// }