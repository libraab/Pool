/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_swap.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abouhlel <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/01/20 09:43:22 by abouhlel          #+#    #+#             */
/*   Updated: 2021/01/20 09:49:50 by abouhlel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_swap(int *a, int *b)
{
	int temporary;

	temporary = *a;
	*a = *b;
	*b = temporary;
}

/*#include <stdio.h>
int main(void)
{
	int x = 55;
	int y = 33;

	int *i;
	int *j;

	i = &x;
	j = &y;

	ft_swap(i, j);
	printf("%d", x);
}*/
