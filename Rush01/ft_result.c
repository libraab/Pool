/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_result.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abouhlel <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/01/24 08:41:53 by abouhlel          #+#    #+#             */
/*   Updated: 2021/01/24 11:02:55 by abouhlel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include "biblio.h"

void	ft_result(int map[6][6])
{
	int		i;
	int		j;
	char	print;

	i = 1;
	j = 1;
	while (j < 5)
	{
		print = map[j][i] % 10 + 48;
		write(1, &print, 1);
		if (i != 4)
			write(1, " ", 1);
		i++;
		if (i > 4)
		{
			write(1, "\n", 1);
			i = 1;
			j++;
		}
	}
}
