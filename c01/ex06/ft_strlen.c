/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlen.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abouhlel <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/01/20 11:28:33 by abouhlel          #+#    #+#             */
/*   Updated: 2021/01/20 13:57:45 by abouhlel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_strlen(char *str)
{
	int i;

	i = 0;
	while (str[i])
		i++;
	return (i);
}

#include <stdio.h>
int main(void)
{
	char *x = "Hello Asma";
	int y;
	y = ft_strlen(x);
	printf("%d", y);
}
