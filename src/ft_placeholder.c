/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_placeholder.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eandre-f <eandre-f@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/12 23:29:44 by eandre-f          #+#    #+#             */
/*   Updated: 2022/05/13 00:43:30 by eandre-f         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libftprintf.h"

void	ft_placeholder(t_format *fmt)
{
	fmt->i++;
	if (fmt->format[fmt->i] == 'c')
		ft_specifier_c(fmt);
	else if (fmt->format[fmt->i] == 's')
		ft_specifier_s(fmt);
	else if (fmt->format[fmt->i] == 'p')
		ft_specifier_p(fmt);
	else if (fmt->format[fmt->i] == 'd' || fmt->format[fmt->i] == 'i')
		ft_specifier_d_i(fmt);
	else if (fmt->format[fmt->i] == 'u')
		ft_specifier_u(fmt);
	else if (fmt->format[fmt->i] == 'x')
		ft_specifier_x(fmt, "0123456789abcdef");
	else if (fmt->format[fmt->i] == 'X')
		ft_specifier_x(fmt, "0123456789ABCDEF");
	else if (fmt->format[fmt->i] == '%')
		ft_specifier_pct(fmt);
}
