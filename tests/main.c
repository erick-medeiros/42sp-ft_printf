/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eandre-f <eandre-f@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/06 17:07:50 by eandre-f          #+#    #+#             */
/*   Updated: 2022/05/16 05:15:01 by eandre-f         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libftprintf.h"
#include "tests.h"
#include "utils.h"

int DEBUG_TEST = 0;

// stdout_cp = copy of default "stdout"

void	exec_test(int stdout_cp, char *name_test, char *(*list_tests)(int (*fn_printf)(const char *format, ...)))
{
	int		fd1;
	int		fd2;
	char	path1[100];
	char	path2[100];
	char	*len1;
	char	*len2;

	// message
	strcpy(path1, "log/");
	strcat(path1, name_test);
	strcat(path1, "_printf.log");
	strcpy(path2, "log/");
	strcat(path2, name_test);
	strcat(path2, "_ft_printf.log");
	printf("\e[33mTesting (%s)\e[00m\n", name_test);
	// printf
	fd1 = open_stdout(path1);
	if (fd1 == -1)
		return ;
	len1 = list_tests(printf);
	stdout_default(stdout_cp, fd1);
	// ft_printf
	fd2 = open_stdout(path2);
	if (fd2 == -1)
		return ;
	len2 = list_tests(ft_printf);
	stdout_default(stdout_cp, fd2);
	// compare
	compare_lines_two_files(path1, path2);
	compare_len(len1, len2);
}

int	main(int argc, char *argv[])
{
	int	stdout_cp;

	if (argc > 1)
		DEBUG_TEST = argv[1][0];
	if (DEBUG_TEST)
	{
		return (0);
	}
	if(RUN_BONUS == 0)
		printf("\e[34mMandatory\e[00m\n");
	else
		printf("\e[34mBonus\e[00m\n");
	stdout_cp = dup(1);
	// mandatory
	exec_test(stdout_cp, "pure", pure_test);
	exec_test(stdout_cp, "c", c_test);
	exec_test(stdout_cp, "s", s_test);
	exec_test(stdout_cp, "p", p_test);
	exec_test(stdout_cp, "d", d_test);
	exec_test(stdout_cp, "i", i_test);
	exec_test(stdout_cp, "u", u_test);
	exec_test(stdout_cp, "x", x_test);
	exec_test(stdout_cp, "upperx", upperx_test);
	exec_test(stdout_cp, "%", pct_test);
	exec_test(stdout_cp, "mix", mix_test);
	if (RUN_BONUS)
	{
		exec_test(stdout_cp, "nbr", nbr_all_test);
		// minus
		exec_test(stdout_cp, "minus_c", minus_c_test);
		exec_test(stdout_cp, "minus_s", minus_s_test);
		exec_test(stdout_cp, "minus_p", minus_p_test);
		exec_test(stdout_cp, "minus_d", minus_d_test);
		exec_test(stdout_cp, "minus_i", minus_i_test);
		exec_test(stdout_cp, "minus_u", minus_u_test);
		exec_test(stdout_cp, "minus_x", minus_x_test);
		exec_test(stdout_cp, "minus_upperx", minus_upperx_test);
		// zero
		exec_test(stdout_cp, "zero_d", zero_d_test);
		exec_test(stdout_cp, "zero_i", zero_i_test);
		exec_test(stdout_cp, "zero_u", zero_u_test);
		exec_test(stdout_cp, "zero_x", zero_x_test);
		exec_test(stdout_cp, "zero_upperx", zero_upperx_test);
		// .
		exec_test(stdout_cp, "dot_s", dot_s_test);
		exec_test(stdout_cp, "dot_d", dot_d_test);
		exec_test(stdout_cp, "dot_i", dot_i_test);
		exec_test(stdout_cp, "dot_u", dot_u_test);
		exec_test(stdout_cp, "dot_x", dot_x_test);
		exec_test(stdout_cp, "dot_upperx", dot_upperx_test);
		// #
		exec_test(stdout_cp, "sharp_x", sharp_x_test);
		exec_test(stdout_cp, "sharp_upperx", sharp_upperx_test);
		// ' '
		exec_test(stdout_cp, "space_s", space_s_test);
		exec_test(stdout_cp, "space_d", space_d_test);
		exec_test(stdout_cp, "space_i", space_i_test);
		// +
		exec_test(stdout_cp, "plus_d", plus_d_test);
		exec_test(stdout_cp, "plus_i", plus_i_test);
		//submix
		exec_test(stdout_cp, "submix", submix_test);
	}
	close(stdout_cp);
	return (0);
}
