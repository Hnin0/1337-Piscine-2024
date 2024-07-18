/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_power.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yimazzi <yimazzi@student.1337.ma>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/18 15:07:43 by yimazzi           #+#    #+#             */
/*   Updated: 2024/07/18 15:10:17 by yimazzi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
int	ft_iterative_power(int nb, int power)
{
	int	i;
	int	nb_p;

	i = 0;
	nb_p = 1;
	if (power < 0)
		return (0);
	while (i < power)
	{
		nb_p *= nb;
		i++;
	}
	return (nb_p);
}
