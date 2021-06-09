/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   doublon.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abouhlel <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/01/24 08:27:58 by abouhlel          #+#    #+#             */
/*   Updated: 2021/01/24 08:35:46 by abouhlel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "biblio.h"

void	doublon_up(int map[6][6], int *error)
{
	if (map[0][1] == 1 || map[0][1] == 4)
		if (map[0][1] == map[0][2] || map[0][1] == map[0][3] ||
		map[0][1] == map[0][4])
			*error = 1;
	if (map[0][2] == 1 || map[0][2] == 4)
		if (map[0][2] == map[0][1] || map[0][2] == map[0][3] ||
		map[0][2] == map[0][4])
			*error = 1;
	if (map[0][3] == 1 || map[0][3] == 4)
		if (map[0][3] == map[0][2] || map[0][3] == map[0][1] ||
		map[0][3] == map[0][4])
			*error = 1;
	if (map[0][4] == 1 || map[0][4] == 4)
		if (map[0][4] == map[0][2] || map[0][4] == map[0][3] ||
		map[0][4] == map[0][1])
			*error = 1;
}

void	doublon_down(int map[6][6], int *error)
{
	if (map[5][1] == 1 || map[5][1] == 4)
		if (map[5][1] == map[5][2] || map[5][1] == map[5][3] ||
		map[5][1] == map[5][4])
			*error = 1;
	if (map[5][2] == 1 || map[5][2] == 4)
		if (map[5][2] == map[5][1] || map[5][2] == map[5][3] ||
		map[5][2] == map[5][4])
			*error = 1;
	if (map[5][3] == 1 || map[5][3] == 4)
		if (map[5][3] == map[5][2] || map[5][3] == map[5][1] ||
		map[5][3] == map[5][4])
			*error = 1;
	if (map[5][4] == 1 || map[5][4] == 4)
		if (map[5][4] == map[5][2] || map[5][4] == map[5][3] ||
		map[5][4] == map[5][1])
			*error = 1;
}

void	doublon_left(int map[6][6], int *error)
{
	if (map[1][0] == 1 || map[1][0] == 4)
		if (map[1][0] == map[2][0] || map[1][0] == map[3][0] ||
		map[1][0] == map[4][0])
			*error = 1;
	if (map[2][0] == 1 || map[2][0] == 4)
		if (map[2][0] == map[1][0] || map[2][0] == map[3][0] ||
		map[2][0] == map[4][0])
			*error = 1;
	if (map[3][0] == 1 || map[3][0] == 4)
		if (map[3][0] == map[1][0] || map[3][0] == map[2][0] ||
		map[3][0] == map[4][0])
			*error = 1;
	if (map[4][0] == 1 || map[4][0] == 4)
		if (map[4][0] == map[1][0] || map[4][0] == map[2][0] ||
		map[4][0] == map[3][0])
			*error = 1;
}

void	doublon_right(int map[6][6], int *error)
{
	if (map[1][5] == 1 || map[1][5] == 4)
		if (map[1][5] == map[2][5] || map[1][5] == map[3][5] ||
		map[1][5] == map[4][5])
			*error = 1;
	if (map[2][5] == 1 || map[2][5] == 4)
		if (map[2][5] == map[1][5] || map[2][5] == map[3][5] ||
		map[2][5] == map[4][5])
			*error = 1;
	if (map[3][5] == 1 || map[3][5] == 4)
		if (map[3][5] == map[1][5] || map[3][5] == map[2][5] ||
		map[3][5] == map[4][5])
			*error = 1;
	if (map[4][5] == 1 || map[4][5] == 4)
		if (map[4][5] == map[1][5] || map[4][5] == map[2][5] ||
		map[4][5] == map[3][5])
			*error = 1;
}
