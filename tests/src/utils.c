/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   utils.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eandre-f <eandre-f@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/06 17:08:14 by eandre-f          #+#    #+#             */
/*   Updated: 2022/05/06 17:10:38 by eandre-f         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "utils.h"

void	stdout_default(int stdout_cp, int fd)
{
	close(fd);
	dup2(stdout_cp, 1);
}

int	open_printf_log(void)
{
	int	fd;

	fd = open("log/printf.log", O_RDWR | O_CREAT, 0777);
	if (fd == -1)
		msg_error("open failed output_printf");
	else
		dup2(fd, 1);
	return (fd);
}

int	open_ft_printf_log(void)
{
	int	fd;

	fd = open("log/ft_printf.log", O_RDWR | O_CREAT, 0777);
	if (fd == -1)
		msg_error("open failed output_printf");
	else
		dup2(fd, 1);
	return (fd);
}

void	msg_error(char *str)
{
	printf("%s\n", str);
}
