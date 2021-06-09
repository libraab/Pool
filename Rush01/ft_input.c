/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_input.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abouhlel <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/01/24 08:38:04 by abouhlel          #+#    #+#             */
/*   Updated: 2021/01/24 08:38:26 by abouhlel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "biblio.h"

void	ft_input(char **av, int map[6][6], int *error)
{
	int i;

	ft_remplissage(map);
	i = 0;
	while (av[1][i])
	{
		while (av[1][i] == ' ')
			i++;
		if ((av[1][i] < '1' || av[1][i] > '4'))
			*error = 1;
		else
		{
			ft_remplir_tab(av, map);
		}
		i++;
	}
	if (i != 31)
		*error = 1;
}
