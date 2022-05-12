/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   utils.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eandre-f <eandre-f@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/06 17:08:25 by eandre-f          #+#    #+#             */
/*   Updated: 2022/05/12 22:29:44 by eandre-f         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef UTILS_H
# define UTILS_H

# include <fcntl.h>
# include <stdio.h>
# include <unistd.h>
# include <string.h>
# include <limits.h>
# include "libft.h"
# include "libftprintf.h"

void	stdout_default(int stdout_cp, int fd);
int		open_stdout(char *path_open);
char	*alloc_len(size_t n);
void	compare_lines_two_files(char *path_open1, char *path_open2);
void	compare_len(char *len1, char *len2);

#endif