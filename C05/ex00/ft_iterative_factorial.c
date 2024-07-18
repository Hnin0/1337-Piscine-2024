/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_factorial.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yimazzi <yimazzi@student.1337.ma>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/18 15:02:12 by yimazzi           #+#    #+#             */
/*   Updated: 2024/07/18 15:04:12 by yimazzi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
int	ft_iterative_factorial(int nb)
{
	int	fct;

	fct = 1;
	if (nb < 0)
		return (0);
	while (nb > 0)
	{
		fct *= nb;
		nb--;
	}
	return (fct);
}
