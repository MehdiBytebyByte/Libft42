/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mboughra <mboughra@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/31 14:40:00 by mboughra          #+#    #+#             */
/*   Updated: 2023/11/17 14:57:21 by mboughra         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strchr(const char *s, int c)
{
	char	*ps;
	char	cc;
	size_t	i;

	i = 0;
	cc = (char)c;
	ps = (char *)s;
	while (ps[i])
	{
		if (ps[i] == cc)
			return (&ps[i]);
		i++;
	}
	if (cc == '\0')
		return (&ps[i]);
	return (NULL);
}
