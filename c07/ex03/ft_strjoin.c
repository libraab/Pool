/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abouhlel <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/02 14:35:33 by abouhlel          #+#    #+#             */
/*   Updated: 2021/02/03 13:51:18 by abouhlel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		ft_strlen(char *str)
{
	int i;

	i = 0;
	while (str[i] != '\0')
	{
		i++;
	}
	return (i);
}

char	*ft_strcat(char *dest, char *src)
{
	int i;
	int j;

	i = 0;
	while (dest[i])
		i++;
	j = 0;
	while (src[j])
	{
		dest[i + j] = src[j];
		j++;
	}
	dest[i + j] = '\0';
	return (dest);
}

char	*ft_strjoin(int size, char **strs, char *sep)
{
	char	*tab;
	int		x;
	int		y;

	y = 0;
	while (y < size)
	{
		x = x + ft_strlen(strs[y]);
		y++;
	}
	x = x + ft_strlen(sep) * (size - 1);
	tab = malloc(sizeof(char) * x);
	tab[0] = 0;
	y = 0;
	while (y < size)
	{
		ft_strcat(tab, strs[y]);
		if (y < (size - 1))
			ft_strcat(tab, sep);
		y++;
	}
	return (tab);
}
