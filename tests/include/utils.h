/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   utils.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eandre-f <eandre-f@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/06 17:08:25 by eandre-f          #+#    #+#             */
/*   Updated: 2022/05/08 00:48:01 by eandre-f         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef UTILS_H
# define UTILS_H

# include <fcntl.h>
# include <stdio.h>
# include <unistd.h>
# include <string.h>
# include "libft.h"
# include "libftprintf.h"

void	stdout_default(int stdout_cp, int fd);
int		open_stdout(char *path_open);
void	compare_lines_two_files(char *path_open1, char *path_open2);

#endif