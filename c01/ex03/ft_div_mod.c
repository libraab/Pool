/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_div_mod.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abouhlel <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/01/20 09:51:17 by abouhlel          #+#    #+#             */
/*   Updated: 2021/01/20 09:55:25 by abouhlel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_div_mod(int a, int b, int *div, int *mod)
{
	*div = (a / b);
	*mod = (a % b);
}

/*#include <stdio.h>
int main(void)
{
	int x = 42;
	int y = 4;

	int m;
	int n;

	int *i;
	int *j;

	i = &m;
	j = &n;

	ft_div_mod(x, y, i, j);
	printf("%d\n%d", m, n);
}*/
