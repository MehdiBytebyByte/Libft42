/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mboughra <mboughra@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/03 11:41:34 by mboughra          #+#    #+#             */
/*   Updated: 2023/11/29 16:21:12 by mboughra         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memchr(const void	*s, int c, size_t	n)
{
	unsigned char	*char_s;
	unsigned char	char_c;
	size_t			i;

	char_s = (unsigned char *)s;
	char_c = (unsigned char)c;
	i = 0;
	while (i < n)
	{
		if (char_s[i] == char_c)
		{
			return ((void *)(s + i));
		}
		i++;
	}
	return (NULL);
}
