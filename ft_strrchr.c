/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mboughra <mboughra@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/31 19:30:08 by mboughra          #+#    #+#             */
/*   Updated: 2023/11/29 21:15:35 by mboughra         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char	*s, int c)
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
