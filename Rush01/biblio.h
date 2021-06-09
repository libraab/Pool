/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   biblio.h                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abouhlel <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/01/24 09:49:02 by abouhlel          #+#    #+#             */
/*   Updated: 2021/01/24 15:54:35 by abouhlel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_result(int map[6][6]);
void	ft_remplissage(int map[6][6]);
void	ft_remplir_tab(char **av, int map[6][6]);
void	ft_input(char **av, int map[6][6], int *error);
void	valid_map(int map[6][6], int *error);
void	face_inverse(int map[6][6], int *error);
void	angle_1(int map[6][6], int *error);
void	angle_4_2_pas_1(int map[6][6], int *error);
void	oppose_4_1_col(int map[6][6], int *error);
void	oppose_4_1_line(int map[6][6], int *error);
void	doublon_up(int map[6][6], int *error);
void	doublon_down(int map[6][6], int *error);
void	doublon_left(int map[6][6], int *error);
void	doublon_right(int map[6][6], int *error);
void	solution(int map[6][6]);
void	search_4(int map[6][6]);
void	right_4(int map[6][6]);
void	left_4(int map[6][6]);
void	down_4(int map[6][6]);
void	up_4(int map[6][6]);
void	up_1(int map[6][6]);
void	down_1(int map[6][6]);
void	left_1(int map[6][6]);
void	right_1(int map[6][6]);
void	search_1(int map[6][6]);
void	vertical_double_print_4(int map[6][6]);
void	horizon_double_print_4(int map[6][6]);
void	double_2_print_4(int map[6][6]);
void	last_horizontal(int map[6][6]);
void	last_vertical(int map[6][6]);
void	last_number(int map[6][6]);
void	print_4_empty(int map[6][6]);
void	print_4_empty_col(int map[6][6]);
void	print_4_empty_lig(int map[6][6]);
void	if_2_1_3004(int map[6][6]);
void	if_2_1_3004_lig(int map[6][6]);
void	if_2_1_3004_col(int map[6][6]);
void	var31_1_lig(int map[6][6]);
void	var31_2_lig(int map[6][6]);
void	var31_3_lig(int map[6][6]);
void	var31_1_col(int map[6][6]);
void	var31_2_col(int map[6][6]);
void	var31_3_col(int map[6][6]);
void	variante_3_1(int map[6][6]);
void	var23_1_lig(int map[6][6]);
void	var23_2_lig(int map[6][6]);
void	var23_3_lig(int map[6][6]);
void	angle_solver(int map[6][6]);
void	if_2_3_0402(int map[6][6]);
