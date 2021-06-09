/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   print_4_empty.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abouhlel <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/01/24 09:44:48 by abouhlel          #+#    #+#             */
/*   Updated: 2021/01/24 09:45:23 by abouhlel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "biblio.h"

void	print_4_empty_col(int map[6][6])
{
	int i;
	int j;

	j = 0;
	i = 1;
	while (i < 5)
	{
		if (map[j + 1][i] != 4)
			if (map[j + 2][i] != 4)
				if (map[j + 3][i] != 4)
					if (map[j + 4][i] != 4)
					{
						if (map[j][i] > map[j + 5][i])
							map[j + map[j][i]][i] = 4;
						if (map[j][i] < map[j + 5][i])
							map[j + 5 - map[j + 5][i]][i] = 4;
					}
		i++;
	}
}

void	print_4_empty_lig(int map[6][6])
{
	int i;
	int j;

	j = 1;
	i = 0;
	while (j < 5)
	{
		if (map[j][i + 1] != 4)
			if (map[j][i + 2] != 4)
				if (map[j][i + 3] != 4)
					if (map[j][i + 4] != 4)
					{
						if (map[j][i] > map[j][i + 5])
							map[j][i + map[j][i]] = 4;
						if (map[j][i] < map[j][i + 5])
							map[j][i + 5 - map[j][i + 5]] = 4;
					}
		j++;
	}
}

void	print_4_empty(int map[6][6])
{
	print_4_empty_col(map);
	print_4_empty_lig(map);
}
