/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_power.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abouhlel <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/01/29 08:03:56 by abouhlel          #+#    #+#             */
/*   Updated: 2021/01/29 08:12:29 by abouhlel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

 int ft_iterative_power(int nb, int power)
{
	int i;

	i = 1;
	if((power != 0 && nb == 0) || power < 0)
		return (0);
	if ((power == 0) || (nb < 0 && power == 0)
			return (1);
	while (power > 0)
	{
		i = i * nb;
		power--;
	}
	return (i);
}
