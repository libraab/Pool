/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_range.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abouhlel <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/01 14:16:20 by abouhlel          #+#    #+#             */
/*   Updated: 2021/02/02 09:42:23 by abouhlel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	*ft_range(int min, int max)
{
	int	*tab;
	int	i;

	i = 0;
	if (!(tab = malloc(sizeof(i) * (max - min))))
		return (0);
	if (min >= max)
		return (0);
	while (max > min)
	{
		tab[i] = min;
		i++;
		min++;
	}
	return (tab);
}
