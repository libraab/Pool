/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush02.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abouhlel <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/01/16 10:01:47 by abouhlel          #+#    #+#             */
/*   Updated: 2021/01/19 11:50:01 by abouhlel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		ft_putchar(char c);

void	ft_print_skelet(int x, char tete, char corps, char pieds)
{
	ft_putchar(tete);
	while ((x - 1) > 1)
	{
		ft_putchar(corps);
		x--;
	}
	if (x > 1)
		ft_putchar(pieds);
	ft_putchar('\n');
}

void	rush(int x, int y)
{
	if (x > 0 && y > 0)
	{
		ft_print_skelet(x, 'A', 'B', 'A');
		y--;
		while (y > 1)
		{
			ft_print_skelet(x, 'B', ' ', 'B');
			y--;
		
		}
	if (y == 1) 
		ft_print_skelet(x, 'C', 'B', 'C');
	}
	return ;
}
