/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libftprintf.h                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eandre-f <eandre-f@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/03 14:55:16 by eandre-f          #+#    #+#             */
/*   Updated: 2022/05/13 15:11:57 by eandre-f         ###   ########.fr       */
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

typedef struct s_holder
{
	int		subspec_width;
	int		width;
	char	*width_string;
	int		subspec_minus;
}	t_holder;

int			ft_printf(const char *format, ...);
int			ft_vprintf(const char *format, va_list ap);
t_format	*ft_initialize_format(const char *format, va_list ap);
t_holder	*ft_initialize_holder(void);
void		ft_placeholder(t_format *fmt);
void		ft_specifier_c(t_format *fmt, t_holder *holder);
void		ft_specifier_s(t_format *fmt, t_holder *holder);
void		ft_specifier_p(t_format *fmt);
void		ft_specifier_d_i(t_format *fmt);
void		ft_specifier_u(t_format *fmt);
void		ft_specifier_x(t_format *fmt, char *base);
void		ft_specifier_pct(t_format *fmt);

void		ft_sub_specifiers(t_format *fmt, t_holder *hdr);

#endif