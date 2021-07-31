/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_params.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abouhlel <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/01/29 09:50:51 by abouhlel          #+#    #+#             */
/*   Updated: 2021/02/01 07:36:51 by abouhlel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putstr(char *str)
{
	int	i;

	i = 0;
	while (str[i++])
		write(1, &str[i], 1);
}

int	ft_strcmp(char *s1, char *s2)
{
	int	a;

	a = 0;
	while (s1[a] && s2[a] && s1[a] == s2[a])
		a++;
	return (s1[a] - s2[a]);
}

int	main(int argc, char **argv)
{
	char	*t;
	int	i;
	int	j;

	i = 1;
	while (i++ < argc)
	{
		j = 0;
		while (j+1 < argc)
		{
			if (ft_strcmp(argv[j], argv[j+1]) < 0)
			{
				t = argv[j];
				argv[j] = argv[j+1];
				argv[j+1] = t;
			}
			j++;
		}
	return (0);
}
