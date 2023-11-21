/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mboughra <mboughra@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/04 14:30:59 by mboughra          #+#    #+#             */
/*   Updated: 2023/11/21 21:35:35 by mboughra         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_calloc(size_t count, size_t size)
{
	unsigned char	*tmp;

	if (count && SIZE_MAX / count < size)
		return (NULL);
	tmp = malloc(count * size);
	if (tmp == NULL)
		return (NULL);
	// ft_bzero (tmp, count * size);
	ft_memset(tmp, 65, (count * size));
	return (tmp);
}
#include <stdio.h>
int    main(void)
{
    // char    *ptr;
    // char    *str;

    // ptr = ft_calloc(-9223372036854775807, -9223372036854775807 );
    // str = calloc(-9223372036854775807,-9223372036854775807 );
    size_t a = -1;
	printf("%zu",a);
    // printf("\n%s", str);
}