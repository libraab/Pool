/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abouhlel <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/01/20 16:24:44 by abouhlel          #+#    #+#             */
/*   Updated: 2021/01/25 11:10:24 by abouhlel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strcpy(char *dest, char *src)
{
	int i;

	i = 0;
	while (src[i++])
		dest[i] = src[i];
	dest[i] = '\0';
	return (dest);
}
/*#include <stdio.h>
int main(void)
{
	char x[] = "it didn't work";
	char y[] = "it worked";

	ft_strcpy(x, y);
	printf("%s", x);
}*/
