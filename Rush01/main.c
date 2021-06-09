/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abouhlel <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/01/24 08:59:35 by abouhlel          #+#    #+#             */
/*   Updated: 2021/01/24 10:06:58 by abouhlel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "biblio.h"

int		main(int ac, char **av)
{
	int	error;
	int map[6][6];

	error = 0;
	if (ac == 2)
	{
		ft_input(av, map, &error);
		valid_map(map, &error);
		solution(map);
		if (error == 0)
			ft_result(map);
	}
	if (ac != 2 || error != 0)
		write(1, "Error\n", 6);
	return (0);
}
