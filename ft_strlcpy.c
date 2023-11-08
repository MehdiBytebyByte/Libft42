/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mboughra <mboughra@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/01 21:59:24 by mboughra          #+#    #+#             */
/*   Updated: 2023/11/05 14:30:23 by mboughra         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcpy(char	*dst, const char	*src, size_t	dstsize)
{
	size_t	i;
	char	*s;

	if (dstsize == 0)
		return (ft_strlen(src));
	s = (char *)src;
	i = 0;
	while (src[i] && i < (dstsize -1))
	{
		dst[i] = src[i];
		i++;
	}
	dst[i] = '\0';
	while (src[i])
	{
		i++;
	}
	return (i);
}
// #include <string.h>
//   int	main(void)
//   {
//  	char dest[30] = {};
//  	char src[] = "salam al3alam";
// 	size_t t = strlcpy(dest,src,0);
// 	printf("%s\n",dest);
// 	printf("%zu\n",t);
//  	char dest2[30] = {};
//  	char src2[] = "salam al3alam";
// 	size_t t2 = ft_strlcpy(dest2,src2,0);
// 	printf("%s\n",dest2);
// 	printf("%zu\n",t2);
// 	}