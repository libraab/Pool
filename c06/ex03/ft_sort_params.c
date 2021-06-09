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

void	ft_putstr(int argc, char *argv[])
{
	int		i;
	int		j;

	i = 1;
	while (i < argc)
	{
		j = 0;
		while (argv[i][j] != '\0')
		{
			write(1, &argv[i][j], 1);
			j++;
		}
		write(1, &"\n", 1);
		i++;
	}
}

int		ft_strcmp(char *s1, char *s2)
{
	int		a;

	a = 0;
	while (s1[a] != '\0' && s2[a] != '\0' && s1[a] == s2[a])
		a++;
	return (s1[a] - s2[a]);
}

int		main(int argc, char *argv[])
{
	char	*ptr;
	int		i;
	int		j;

	i = 1;
	while (i < argc)
	{
		j = i;
		while (j > 1)
		{
			if (ft_strcmp(argv[j - 1], argv[j]) > 0)
			{
				ptr = argv[j - 1];
				argv[j - 1] = argv[j];
				argv[j] = ptr;
			}
			j--;
		}
		i++;
	}
	ft_putstr(argc, argv);
	return (0);
}
