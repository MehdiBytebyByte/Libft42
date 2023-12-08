/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mboughra <mboughra@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/01 20:38:20 by mboughra          #+#    #+#             */
/*   Updated: 2023/11/24 18:32:01 by mboughra         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dst, const void *src, size_t len)
{
	unsigned char	*c_dst;
	unsigned char	*c_src;
	size_t			i;

	c_dst = (unsigned char *)dst;
	c_src = (unsigned char *)src;
	i = 0;
	if (dst == src)
		return (dst);
	if (c_dst < c_src)
		ft_memcpy(dst, src, len);
	else
	{
		i = len;
		while (i > 0)
		{
			c_dst[i - 1] = c_src[i - 1];
			i--;
		}
	}
	return (dst);
}
