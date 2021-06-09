/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abouhlel <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/01 06:44:58 by abouhlel          #+#    #+#             */
/*   Updated: 2021/02/02 09:36:28 by abouhlel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

char	*ft_strdup(char *src)
{
	int		x;
	char	*str;
	int		i;

	x = 0;
	while (src[x])
		x++;
	str = (char*)malloc(sizeof(str) * (x + 1));
	if (!str)
		return (NULL);
	i = 0;
	while (i < x)
	{
		str[i] = src[i];
		i++;
	}
	str[i] = '\0';
	return (str);
}
