/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   utils.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eandre-f <eandre-f@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/06 17:08:25 by eandre-f          #+#    #+#             */
/*   Updated: 2022/05/06 17:09:06 by eandre-f         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef UTILS_H
# define UTILS_H

# include <fcntl.h>
# include <stdio.h>
# include <unistd.h>

void	stdout_default(int stdout_cp, int fd);
int		open_printf_log(void);
int		open_ft_printf_log(void);
void	msg_error(char *str);

#endif