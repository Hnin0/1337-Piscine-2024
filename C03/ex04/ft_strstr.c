/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yimazzi <yimazzi@student.1337.ma>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/16 14:32:59 by yimazzi           #+#    #+#             */
/*   Updated: 2024/07/16 15:59:53 by yimazzi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
char	*ft_strstr(char *str, char *to_find)
{
	int	i;
	int	j;

	i = 0;
	j = 0;
	if (to_find[j] == '\0')
		return (str);
	if (str[i] == '\0')
		return (0);
	while (str[i] != '\0')
	{
		j = 0;
		while ((str[i + j] == to_find[j]) && str[i + j] != '\0'
			&& to_find[k] != '\0')
			j++;
		if (to_find[j] == '\0')
		{
			return (&str[i]);
		}
		i++;
	}
	return (0);
}
