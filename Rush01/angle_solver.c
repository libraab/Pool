/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   angle_solver.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abouhlel <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/01/24 15:02:38 by abouhlel          #+#    #+#             */
/*   Updated: 2021/01/24 15:03:18 by abouhlel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "biblio.h"

void	angle_solver(int map[6][6])
{
	int count;
	int i;
	int j;
	int number;

	j = 1;
	i = 1;
	number = 2;
	count = 0;
	if ((map[j][i] && map[j][i + 3] && map[j + 3][i] && map[j + 3][i + 3]) == 0)
	{
		while (count != 40)
		{
			map[j][i] = number;
			count = map[1][1] + map[1][2] + map[1][3] + map[1][4] +
					map[2][1] + map[2][2] + map[2][3] + map[2][4] +
					map[3][1] + map[3][2] + map[3][3] + map[3][4] +
					map[4][1] + map[4][2] + map[4][3] + map[4][4];
			last_number(map);
			number++;
			if (number == 5)
				number = 1;
		}
	}
}
