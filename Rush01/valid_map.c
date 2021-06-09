/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   valid_map.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abouhlel <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/01/24 08:53:57 by abouhlel          #+#    #+#             */
/*   Updated: 2021/01/24 08:54:12 by abouhlel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "biblio.h"

void	valid_map(int map[6][6], int *error)
{
	face_inverse(map, error);
	angle_1(map, error);
	angle_4_2_pas_1(map, error);
	oppose_4_1_col(map, error);
	oppose_4_1_line(map, error);
	doublon_up(map, error);
	doublon_down(map, error);
	doublon_left(map, error);
	doublon_right(map, error);
}
