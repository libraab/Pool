/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   variante_3_1.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abouhlel <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/01/24 12:45:00 by abouhlel          #+#    #+#             */
/*   Updated: 2021/01/24 13:15:09 by abouhlel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "biblio.h"

void	var31_1_lig(int map[6][6])
{
	int j;
	int i;

	j = 1;
	i = 0;
	while (i < 5)
	{
		if (map[j][i] == 3 && map[j][i + 5]
			== 1 && map[j][i + 3] == 3 && map[j][i + 4] == 4)
		{
			map[j][i + 1] = 2;
			map[j][i + 2] = 1;
		}
		if (map[j][i] == 3 && map[j][i + 5]
			== 1 && map[j][i + 3] == 2 && map[j][i + 4] == 4)
		{
			map[j][i + 1] = 1;
			map[j][i + 2] = 3;
		}
		if (map[j][i] == 3 && map[j][i + 5]
			== 1 && map[j][i + 3] == 1 && map[j][i + 4] == 4)
		{
			map[j][i + 1] = 2;
			map[j][i + 2] = 3;
		}
		i++;
	}
}

void	var31_2_lig(int map[6][6])
{
	int j;
	int i;

	j = 1;
	i = 0;
	while (i < 5)
	{
		if (map[j][i] == 3 && map[j][i + 5]
			== 1 && map[j][i + 1] == 1 && map[j][i + 2] == 3)
		{
			map[j][i + 3] = 2;
			map[j][i + 4] = 4;
		}
		if (map[j][i] == 3 && map[j][i + 5]
			== 1 && map[j][i + 1] == 2 && map[j][i + 2] == 1)
		{
			map[j][i + 3] = 3;
			map[j][i + 4] = 4;
		}
		if (map[j][i] == 3 && map[j][i + 5]
			== 1 && map[j][i + 1] == 2 && map[j][i + 2] == 3)
		{
			map[j][i + 3] = 1;
			map[j][i + 4] = 4;
		}
		i++;
	}
}

void	var31_3_lig(int map[6][6])
{
	int j;
	int i;

	j = 1;
	i = 0;
	while (i < 5)
	{
		if (map[j][i] == 3 && map[j][i + 5]
			== 1 && map[j][i + 2] == 3 && map[j][i + 3] == 1)
		{
			map[j][i + 1] = 2;
			map[j][i + 4] = 4;
		}
		if (map[j][i] == 3 && map[j][i + 5]
			== 1 && map[j][i + 2] == 1 && map[j][i + 3] == 3)
		{
			map[j][i + 1] = 2;
			map[j][i + 4] = 4;
		}
		if (map[j][i] == 3 && map[j][i + 5]
			== 1 && map[j][i + 2] == 3 && map[j][i + 3] == 2)
		{
			map[j][i + 1] = 1;
			map[j][i + 4] = 4;
		}
		i++;
	}
}

void	var31_1_col(int map[6][6])
{
	int j;
	int i;

	j = 0;
	i = 1;
	while (j < 5)
	{
		if (map[j][i] == 3 && map[j + 5][i]
			== 1 && map[j + 3][i] == 3 && map[j + 4][i] == 4)
		{
			map[j + 1][i] = 2;
			map[j + 2][i] = 1;
		}
		if (map[j][i] == 3 && map[j][i + 5]
			== 1 && map[j + 3][i] == 2 && map[j + 4][i] == 4)
		{
			map[j + 1][i] = 1;
			map[j + 2][i] = 3;
		}
		if (map[j][i] == 3 && map[j][i + 5]
			== 1 && map[j + 3][i] == 1 && map[j + 4][i] == 4)
		{
			map[j + 1][i] = 2;
			map[j + 2][i] = 3;
		}
		j++;
	}
}

void	var31_2_col(int map[6][6])
{
	int j;
	int i;

	j = 0;
	i = 1;
	while (j < 5)
	{
		if (map[j][i] == 3 && map[j + 5][i]
			== 1 && map[j + 1][i] == 1 && map[j + 2][i] == 3)
		{
			map[j + 3][i] = 2;
			map[j + 4][i] = 4;
		}
		if (map[j][i] == 3 && map[j + 5][i]
			== 1 && map[j + 1][i] == 2 && map[j + 2][i] == 1)
		{
			map[j + 3][i] = 3;
			map[j + 4][i] = 4;
		}
		if (map[j][i] == 3 && map[j + 5][i]
			== 1 && map[j + 1][i] == 2 && map[j + 2][i] == 3)
		{
			map[j + 3][i] = 1;
			map[j + 4][i] = 4;
		}
		j++;
	}
}

void	var31_3_col(int map[6][6])
{
	int j;
	int i;

	j = 0;
	i = 1;
	while (j < 5)
	{
		if (map[j][i] == 3 && map[j + 5][i]
			== 1 && map[j + 2][i] == 3 && map[j + 3][i] == 1)
		{
			map[j + 1][i] = 2;
			map[j + 4][i] = 4;
		}
		if (map[j][i] == 3 && map[j + 5][i]
			== 1 && map[j + 2][i] == 1 && map[j + 3][i] == 3)
		{
			map[j + 1][i] = 2;
			map[j + 4][i] = 4;
		}
		if (map[j][i] == 3 && map[j + 5][i]
			== 1 && map[j + 2][i] == 3 && map[j + 3][i] == 2)
		{
			map[j + 1][i] = 1;
			map[j + 4][i] = 4;
		}
		j++;
	}
}

void	variante_3_1(int map[6][6])
{
	var31_1_lig(map);
	var31_2_lig(map);
	var31_3_lig(map);
	var31_1_col(map);
	var31_2_col(map);
	var31_3_col(map);
}
