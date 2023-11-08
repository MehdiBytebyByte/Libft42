/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mboughra <mboughra@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/02 15:16:29 by mboughra          #+#    #+#             */
/*   Updated: 2023/11/06 14:36:38 by mboughra         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char	*dst, const char	*src, size_t	dstsize)
{
	size_t	dstlen;
	size_t	srclen;
	size_t	i;
	size_t	total;

	i = 0;
	dstlen = ft_strlen(dst);
	srclen = ft_strlen(src);
	if (dstsize == 0)
		return (srclen);
	if (dstsize <= dstlen)
		return (dstsize + srclen);
	total = dstlen + srclen;
	while (src[i] && (i + dstlen) < (dstsize - 1))
	{
		dst[dstlen + i] = src[i];
		i++;
	}
	dst[dstlen + i] = '\0';
	return (total);
}

// #include <string.h>

// int	main(void)
// {
// 	char *a = NULL;
// 	char b[] = "abc";

// 	printf("the return is : %zu \nthe string concatanated is %s
// \n",ft_strlcat(a,b,2),a);

// }