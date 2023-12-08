/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mboughra <mboughra@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/31 14:40:00 by mboughra          #+#    #+#             */
/*   Updated: 2023/11/29 16:23:24 by mboughra         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strchr(const char *s, int c)
{
	char	*char_s;
	char	char_c;
	size_t	i;

	i = 0;
	char_c = (char)c;
	char_s = (char *)s;
	while (char_s[i])
	{
		if (char_s[i] == char_c)
			return (&char_s[i]);
		i++;
	}
	if (char_c == '\0')
		return (&char_s[i]);
	return (NULL);
}
