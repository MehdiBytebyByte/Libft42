/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isdigit.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mboughra <mboughra@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/30 19:23:16 by mboughra          #+#    #+#             */
/*   Updated: 2023/10/31 14:10:41 by mboughra         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_isdigit(int c)
{
	if (c >= '0' && c <= '9')
	{
		return (1);
	}
	return (0);
}
/*
#include<stdio.h>

int	main(void)
{
	printf("%d",ft_isdigit('0'));		
	printf("%d",ft_isdigit('a'));
	printf("%d",ft_isdigit('/'));
	printf("%d",ft_isdigit('*'));
	return 0;
}
*/
