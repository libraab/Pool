/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   last_number.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abouhlel <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/01/24 09:16:55 by abouhlel          #+#    #+#             */
/*   Updated: 2021/01/24 14:10:02 by abouhlel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "biblio.h"

void	last_horizontal(int map[6][6])
{
	int count;
	int j;
	int i;

	j = 1;
	i = 1;
	while (j < 5)
	{
		count = 0;
		if (map[j][i] != 0)
			count++;
		if (map[j][i + 1] != 0)
			count++;
		if (map[j][i + 2] != 0)
			count++;
		if (map[j][i + 3] != 0)
			count++;
		if (count == 3)
		{
			count = 0;
			count = (map[j][i] + map[j][i + 1] + map[j][i + 2])
			+ (map[j][i + 3]);
			count = (10 - count);
			if (map[j][i] == 0)
				map[j][i] = count;
			if (map[j][i + 1] == 0)
				map[j][i + 1] = count;
			if (map[j][i + 2] == 0)
				map[j][i + 2] = count;
			if (map[j][i + 3] == 0)
				map[j][i + 3] = count;
		}
		j++;
	}
}

void	last_vertical(int map[6][6])
{
	int count;
	int j;
	int i;

	j = 1;
	i = 1;
	while (i < 5)
	{
		count = 0;
		if (map[j][i] != 0)
			count++;
		if (map[j + 1][i] != 0)
			count++;
		if (map[j + 2][i] != 0)
			count++;
		if (map[j + 3][i] != 0)
			count++;
		if (count == 3)
		{
			count = 0;
			count = map[j][i] + map[j + 1][i] + map[j + 2][i] + map[j + 3][i];
			count = (10 - count);
			if (map[j][i] == 0)
				map[j][i] = count;
			if (map[j + 1][i] == 0)
				map[j + 1][i] = count;
			if (map[j + 2][i] == 0)
				map[j + 2][i] = count;
			if (map[j + 3][i] == 0)
				map[j + 3][i] = count;
		}
		i++;
	}
}

void	last_number(int map[6][6])
{
	last_horizontal(map);
	last_vertical(map);
}
