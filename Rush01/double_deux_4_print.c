/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   double_deux_4_print.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abouhlel <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/01/24 09:13:27 by abouhlel          #+#    #+#             */
/*   Updated: 2021/01/24 09:16:31 by abouhlel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "biblio.h"

void	vertical_double_print_4(int map[6][6])
{
	int j;
	int i;

	j = 0;
	i = 1;
	while (i < 5)
	{
		if (map[j][i] == 2 && map[j + 5][i] == 2)
		{
			if (map[j + 2][i] != 0 || map[j + 3][i] != 0)
			{
				if (map[j + 2][i] == 0 && map[j + 3][i] != 4)
					map[j + 2][i] = 4;
				if (map[j + 3][i] == 0 && map[j + 2][i] != 4)
					map[j + 3][i] = 4;
			}
		}
		i++;
	}
}

void	horizon_double_print_4(int map[6][6])
{
	int j;
	int i;

	j = 1;
	i = 0;
	while (j < 5)
	{
		if (map[j][i] == 2 && map[j][i + 5] == 2)
		{
			if (map[j][i + 2] != 0 || map[j][i + 3] != 0)
			{
				if (map[j][i + 2] == 0 && map[j][i + 3] != 4)
					map[j][i + 2] = 4;
				if (map[j][i + 3] == 0 && map[j][i + 2] != 4)
					map[j][i + 3] = 4;
			}
		}
		j++;
	}
}

void	double_2_print_4(int map[6][6])
{
	horizon_double_print_4(map);
	vertical_double_print_4(map);
}
