/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlowcase.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yimazzi <yimazzi@student.1337.ma>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/07 14:26:53 by yimazzi           #+#    #+#             */
/*   Updated: 2024/07/08 15:23:51 by yimazzi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
char	*ft_strlowcase(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0' )
	{
		if (str[i] >= 'A' && str[i] <= 'Z' )
		{
			str[i] += 32;
		}
		i++;
	}
	return (str);
}
