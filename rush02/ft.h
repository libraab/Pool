/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft.h                                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abouhlel <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/01/30 09:14:03 by abouhlel          #+#    #+#             */
/*   Updated: 2021/01/30 16:13:39 by abouhlel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_H

#define FT_H

#define ERROR "Error\n"

#define ERROR DICT_FILE "numbers_eng.dict"

#include <unistd.h>

#include <stdio.h>

#include <fcntl.h>

#include <string.h>

int	ft_strlen(char *str);
void	ft_putstr(char *str);
int	ft_strcmp(char *s1, char *s2);
int	count_total(char *str);
int	check_arg(char *str);
char	**parse_dictionary (void);
void	ft_print(char *str, char **tab);
char	*ft_split(char *tab);
int	zero_check(char *str);

#endif
