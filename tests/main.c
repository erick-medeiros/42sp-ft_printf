/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eandre-f <eandre-f@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/06 17:07:50 by eandre-f          #+#    #+#             */
/*   Updated: 2022/05/08 02:05:12 by eandre-f         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libftprintf.h"
#include "tests.h"
#include "utils.h"

// stdout_cp = copy of default "stdout"

void	exec_test(int stdout_cp, char *name_test, void (*list_tests)(int (*fn_printf)(const char *format, ...)))
{
	int		fd1;
	int		fd2;
	char	path1[100];
	char	path2[100];

	strcpy(path1, "log/");
	strcat(path1, name_test);
	strcat(path1, "_printf.log");
	strcpy(path2, "log/");
	strcat(path2, name_test);
	strcat(path2, "_ft_printf.log");
	printf("\e[33mTesting (%s)\e[00m\n", name_test);
	fd1 = open_stdout(path1);
	if (fd1 == -1)
		return ;
	list_tests(printf);
	stdout_default(stdout_cp, fd1);
	fd2 = open_stdout(path2);
	if (fd2 == -1)
		return ;
	list_tests(ft_printf);
	stdout_default(stdout_cp, fd2);
	compare_lines_two_files(path1, path2);
}

int	main(void)
{
	int	stdout_cp;

	stdout_cp = dup(1);
	exec_test(stdout_cp, "pure", pure_test);
	exec_test(stdout_cp, "c", c_test);
	close(stdout_cp);
	return (0);
}