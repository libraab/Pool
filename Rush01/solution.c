/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   solution.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abouhlel <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/01/24 09:41:48 by abouhlel          #+#    #+#             */
/*   Updated: 2021/01/24 15:56:24 by abouhlel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "biblio.h"

void	solution(int map[6][6])
{
	int i;

	i = 0;
	while (i != 2)
	{
		search_4(map);
		search_1(map);
		double_2_print_4(map);
		print_4_empty(map);
		if_2_1_3004(map);
		variante_3_1(map);
		last_number(map);
		if_2_3_0402(map);
		angle_solver(map);
		i++;
	}
}
