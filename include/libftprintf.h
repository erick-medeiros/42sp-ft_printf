/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libftprintf.h                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eandre-f <eandre-f@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/03 14:55:16 by eandre-f          #+#    #+#             */
/*   Updated: 2022/05/16 02:57:21 by eandre-f         ###   ########.fr       */
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
	unsigned char	flag_minus;
	unsigned char	flag_plus;
	unsigned char	flag_space;
	unsigned char	flag_numbersign;
	unsigned char	flag_zero;
	unsigned char	subspec_width;
	unsigned int	width;
	unsigned char	subspec_dot;
	unsigned char	subspec_precision;
	unsigned int	precision;
	char			*buffer;
}	t_holder;

int			ft_printf(const char *format, ...);
int			ft_vprintf(const char *format, va_list ap);

t_format	*ft_initialize_format(const char *format, va_list ap);
t_holder	*ft_initialize_holder(void);

void		ft_placeholder(t_format *fmt);
void		ft_placeholder_subspec(t_format *fmt, t_holder *hdr);
void		ft_placeholder_subspec_width(t_format *fmt, t_holder *hdr);
void		ft_placeholder_subspec_precision(t_format *fmt, t_holder *hdr);

void		ft_specifier_c(t_format *fmt, t_holder *hdr);
void		ft_specifier_s(t_format *fmt, t_holder *hdr);
void		ft_specifier_p(t_format *fmt, t_holder *hdr);
void		ft_specifier_d_i(t_format *fmt, t_holder *hdr);
void		ft_specifier_u(t_format *fmt, t_holder *hdr);
void		ft_specifier_x(t_format *fmt, t_holder *hdr, char *pre, char *base);
void		ft_specifier_pct(t_format *fmt);

void		ft_subspec_buffer(t_holder *hdr);
void		ft_subspec_justify(t_holder *hdr, char *str);
void		ft_subspec_minimum_number(char **str, char c, size_t size);

#endif