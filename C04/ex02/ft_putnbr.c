/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yimazzi <yimazzi@student.1337.ma>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/16 13:32:29 by yimazzi           #+#    #+#             */
/*   Updated: 2024/07/17 09:00:24 by yimazzi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	ft_putnbr(int nb)
{
	if (nb == -2147483648)
	{
		ft_putchar('-');
		ft_putchar('2');
		nb = 147483648;
	}
	else if (nb < 0)
	{
		ft_putchar('-');
		nb = -nb;
		ft_putchar(nb);
	}
	if (nb > 9)
	{
		ft_putchar(nb / 10);
		ft_putchar(nb % 10);
	}
	else if (nb >= 0 && nb <= 9)
	{
		ft_putchar(nb = 48);
	}
}
