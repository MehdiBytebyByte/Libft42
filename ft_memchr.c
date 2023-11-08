/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mboughra <mboughra@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/03 11:41:34 by mboughra          #+#    #+#             */
/*   Updated: 2023/11/03 15:57:46 by mboughra         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memchr(const void	*s, int c, size_t	n)
{
	unsigned char	*cs;
	unsigned char	cc;
	size_t			i;

	cs = (unsigned char *)s;
	cc = (unsigned char)c;
	i = 0;
	while (i < n)
	{
		if (cs[i] == cc)
		{
			return ((void *)(s + i));
		}
		i++;
	}
	return (NULL);
}

// #include <string.h>

// int	main(void)
// {
// 	char str[] = "abcdefgh";
// 	int d = 103;
// 	printf("%s\n",memchr(str,d,9));
// 	printf("%s",ft_memchr(str,d,9));
// }