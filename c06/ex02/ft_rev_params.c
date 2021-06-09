/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rev_params.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abouhlel <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/01/29 09:50:29 by abouhlel          #+#    #+#             */
/*   Updated: 2021/01/30 16:55:58 by abouhlel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	main(int argc, char *argv[])
{
	int	pos;
	int	i;

	i = argc - 1;
	while (i >= 1)
	{
		pos = 0;
		while (argv[i][pos] != '\0')
		{
			write(1, &argv[i][pos], 1);
			pos = pos + 1;
		}
		write(1, &"\n", 1);
		i = i - 1;
	}
	return (0);
}
