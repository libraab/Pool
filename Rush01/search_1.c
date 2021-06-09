/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   search_1.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abouhlel <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/01/24 09:27:09 by abouhlel          #+#    #+#             */
/*   Updated: 2021/01/24 09:57:43 by abouhlel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	up_1(int map[6][6])
{
	int j;
	int i;

	j = 0;
	i = 1;
	while (i < 5)
	{
		if (map[j][i] == 1)
		{
			map[j + 1][i] = 4;
		}
		i++;
	}
}

void	down_1(int map[6][6])
{
	int j;
	int i;

	j = 5;
	i = 1;
	while (i < 5)
	{
		if (map[j][i] == 1)
		{
			map[j - 1][i] = 4;
		}
		i++;
	}
}

void	left_1(int map[6][6])
{
	int j;
	int i;

	j = 1;
	i = 0;
	while (j < 5)
	{
		if (map[j][i] == 1)
		{
			map[j][i + 1] = 4;
		}
		j++;
	}
}

void	right_1(int map[6][6])
{
	int j;
	int i;

	j = 1;
	i = 5;
	while (j < 5)
	{
		if (map[j][i] == 1)
		{
			map[j][i - 1] = 4;
		}
		j++;
	}
}

void	search_1(int map[6][6])
{
	up_1(map);
	down_1(map);
	left_1(map);
	right_1(map);
}
