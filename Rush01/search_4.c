/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   search_4.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abouhlel <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/01/24 09:35:22 by abouhlel          #+#    #+#             */
/*   Updated: 2021/01/24 09:37:08 by abouhlel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	up_4(int map[6][6])
{
	int j;
	int i;

	j = 0;
	i = 1;
	while (i < 5)
	{
		if (map[j][i] == 4)
		{
			map[j + 1][i] = 1;
			map[j + 2][i] = 2;
			map[j + 3][i] = 3;
			map[j + 4][i] = 4;
		}
		i++;
	}
}

void	down_4(int map[6][6])
{
	int j;
	int i;

	j = 5;
	i = 1;
	while (i < 5)
	{
		if (map[j][i] == 4)
		{
			map[j - 1][i] = 1;
			map[j - 2][i] = 2;
			map[j - 3][i] = 3;
			map[j - 4][i] = 4;
		}
		i++;
	}
}

void	left_4(int map[6][6])
{
	int j;
	int i;

	j = 1;
	i = 0;
	while (j < 5)
	{
		if (map[j][i] == 4)
		{
			map[j][i + 1] = 1;
			map[j][i + 2] = 2;
			map[j][i + 3] = 3;
			map[j][i + 4] = 4;
		}
		j++;
	}
}

void	right_4(int map[6][6])
{
	int j;
	int i;

	j = 1;
	i = 5;
	while (j < 5)
	{
		if (map[j][i] == 4)
		{
			map[j][i - 1] = 1;
			map[j][i - 2] = 2;
			map[j][i - 3] = 3;
			map[j][i - 4] = 4;
		}
		j++;
	}
}

void	search_4(int map[6][6])
{
	up_4(map);
	down_4(map);
	left_4(map);
	right_4(map);
}
