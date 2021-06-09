/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_program_name.c                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abouhlel <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/01/29 09:49:59 by abouhlel          #+#    #+#             */
/*   Updated: 2021/01/30 16:29:15 by abouhlel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	main(int argc, char *argv[])
{
	int	pos;

	(void)argc;
	pos = 0;
	while (argv[0][pos] != '\0')
	{
		write(1, &argv[0][pos], 1);
		pos = pos + 1;
	}
	write(1, &"\n", 1);
	return (0);
}
