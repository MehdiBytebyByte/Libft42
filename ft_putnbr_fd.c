/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mboughra <mboughra@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/10 22:54:24 by mboughra          #+#    #+#             */
/*   Updated: 2023/11/10 22:56:32 by mboughra         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_putnbr_fd(int nb)
{
	if (nb == -2147483648)
	{
		ft_putchar_fd('-');
		ft_putchar_fd('2');
		nb = 147483648;
	}
	if (nb < 0)
	{
		nb *= -1;
		ft_putchar_fd('-');
	}
	if (nb < 10)
	{
		ft_putchar_fd(nb + 48);
	}
	else
	{
		ft_putnbr_fd(nb / 10);
		ft_putnbr_fd(nb % 10);
	}
}
