/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_is_negative.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abouhlel <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/01/18 07:41:40 by abouhlel          #+#    #+#             */
/*   Updated: 2021/01/19 06:50:58 by abouhlel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_is_negative(int nb)
{
	if (nb < 0)
		write(1, "N", 1);
	else
		write(1, "P", 1);//zero is positive
}

/*int main(void)
{
	ft_is_negative(-42); 
}*/
