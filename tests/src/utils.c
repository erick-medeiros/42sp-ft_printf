/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   utils.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eandre-f <eandre-f@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/06 17:08:14 by eandre-f          #+#    #+#             */
/*   Updated: 2022/05/12 02:50:45 by eandre-f         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "utils.h"

void	stdout_default(int stdout_cp, int fd)
{
	close(fd);
	dup2(stdout_cp, 1);
}

int	open_stdout(char *path_open)
{
	int	fd;

	fd = open(path_open, O_RDWR | O_CREAT, 0777);
	if (fd == -1)
		printf("open failed: %s\n", path_open);
	else
		dup2(fd, 1);
	return (fd);
}

void	compare_lines_two_files(char *path_open1, char *path_open2)
{
	size_t		i;
	int			fd1;
	int			fd2;
	char		*s1;
	char		*s2;

	fd1 = open(path_open1, O_RDONLY);
	fd2 = open(path_open2, O_RDONLY);
	i = 1;
	s1 = get_next_line(fd1);
	s2 = get_next_line(fd2);
	while (s1 != NULL || s2 != NULL)
	{
		if (strcmp(s1, s2) != 0)
		{
			printf("\e[91mError line %zu\e[00m\n", i);
			printf("s1 (org) = %s", s1);
			printf("s2 (cpy) = %s", s2);
			break ;
		}
		else
		{
			free(s1);
			free(s2);
			s1 = get_next_line(fd1);
			s2 = get_next_line(fd2);
		}
		i++;
	}
	close(fd1);
	close(fd2);
	if (s1 == NULL && s2 == NULL)
		printf("\e[32mTests OK\e[00m\n");
	free(s1);
	free(s2);
}
