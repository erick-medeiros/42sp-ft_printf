/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libftprintf.h                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eandre-f <eandre-f@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/03 14:55:16 by eandre-f          #+#    #+#             */
/*   Updated: 2022/05/12 23:52:01 by eandre-f         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef LIBFTPRINTF_H
# define LIBFTPRINTF_H

# include <stdlib.h>
# include <unistd.h>
# include <stdarg.h>
# include "libft.h"

typedef struct s_format
{
	const char	*format;
	va_list		ap;
	size_t		i;
	size_t		length;
}	t_format;

int			ft_printf(const char *format, ...);
int			ft_vprintf(const char *format, va_list ap);
t_format	*ft_initialize_format(const char *format, va_list ap);
void		ft_placeholder(t_format *fmt);

#endif