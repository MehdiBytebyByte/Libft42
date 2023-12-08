/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mboughra <mboughra@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/09 12:43:54 by mboughra          #+#    #+#             */
/*   Updated: 2023/12/05 14:31:37 by mboughra         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static char	*filler(char *ret, long count, long n)
{
	long	n2;

	ret[count--] = '\0';
	if (n > 0)
	{
		while (count >= 0)
		{
			n2 = n % 10;
			ret[count--] = n2 + '0';
			n = n / 10;
		}
	}
	if (n < 0)
	{
		n = n * -1;
		while (count >= 1)
		{
			n2 = n % 10;
			ret[count--] = n2 + '0';
			n = n / 10;
		}
		ret[0] = '-';
	}
	return (ret);
}

char	*ft_itoa(int n)
{
	long		count;
	long		n2;
	char		*ret;

	count = 0;
	n2 = n;
	if (n == '\0')
		return (ft_strdup("0"));
	while (n2 != 0)
	{
		n2 = n2 / 10;
		count++;
	}
	if (n < 0)
		count++;
	ret = (char *)malloc(sizeof(char) * count + 1);
	if (!ret)
		return (NULL);
	ret = filler(ret, count, n);
	return (ret);
}
