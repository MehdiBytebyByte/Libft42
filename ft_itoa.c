/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mboughra <mboughra@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/09 12:43:54 by mboughra          #+#    #+#             */
/*   Updated: 2023/11/09 13:51:39 by mboughra         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_itoa(int n)
{
	char *ret;
	int i;
	int m;
	int j;
	
	m = n;
	j = 0;
	i = 0;
	while (m != 0)
	{
		m = m / 10;
		i++;
	}
	while (0 != i)
	{
		ret[j] ==
	}
	
}
int main(void)
{
	// ft_itoa(1337);

int a = -10;
int b = 10;
	printf("%d",a / b);
}