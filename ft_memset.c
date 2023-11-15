/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mboughra <mboughra@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/31 23:18:16 by mboughra          #+#    #+#             */
/*   Updated: 2023/11/15 20:30:29 by mboughra         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memset(void *b, int c, size_t len)
{
	unsigned char	*b_char;
	unsigned char	c_char;
	size_t			i;

	b_char = (unsigned char *)b;
	c_char = (unsigned char)c;
	i = 0;
	while (len > i)
	{
		b_char[i] = c_char;
		i++;
	}
	return (b);
}

// int main(void)
// {
// 	int a = 0;

// 	ft_memset(&a,57,1);
// 	ft_memset((char *)&a + 1,5,1);

// 	printf("%d",a);	
// }