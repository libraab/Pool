/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb2.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abouhlel <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/01/19 11:02:04 by abouhlel          #+#    #+#             */
/*   Updated: 2021/01/20 09:18:19 by abouhlel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_print_comb2(void);

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	ft_putchars(void)
{
	ft_putchar(',');
	ft_putchar(' ');
}

void	ft_print_comb2(void)
{
	int ab;
	int cd;

	ab = 0;
	while (ab <= 98)
	{
		cd = ab + 1;
		while (cd <= 99)
		{
			ft_putchar('0' + (ab / 10));
			ft_putchar('0' + (ab % 10));
			ft_putchar(' ');
			ft_putchar('0' + (cd / 10));
			ft_putchar('0' + (cd % 10));
			if (ab != 98)
				ft_putchars();
			cd++;
		}
		ab++;
	}
}
