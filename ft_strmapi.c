/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmapi.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mboughra <mboughra@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/10 20:14:20 by mboughra          #+#    #+#             */
/*   Updated: 2023/11/17 14:57:46 by mboughra         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strmapi(char const *s, char (*f)(unsigned int, char))
{
	size_t	len;
	size_t	i;
	char	*re;

	if (s == NULL)
		return (NULL);
	len = ft_strlen(s);
	re = (char *)malloc(sizeof(char) * (len + 1));
	if (!re)
		return (NULL);
	i = 0;
	while (i < len)
	{
		re[i] = (*f)(i, s[i]);
		i++;
	}
	re[i] = '\0';
	return (re);
}
