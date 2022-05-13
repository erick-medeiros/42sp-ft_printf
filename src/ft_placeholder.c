/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_placeholder.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eandre-f <eandre-f@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/12 23:29:44 by eandre-f          #+#    #+#             */
/*   Updated: 2022/05/13 03:39:29 by eandre-f         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libftprintf.h"

void	ft_placeholder(t_format *fmt)
{
	t_holder *holder;
	int	start;
	char	*s;

	fmt->i++;
	holder = ft_initialize_holder();

	if (fmt->format[fmt->i] == '-')
	{
		holder->flag_minus = '-';
		fmt->i++;
	}
	if (ft_isdigit(fmt->format[fmt->i]))
	{
		start = fmt->i;
		while(ft_isdigit(fmt->format[fmt->i]))
			fmt->i++;
		s = ft_substr(&(fmt->format[start]), 0, fmt->i - start + 1);
		holder->flag_width = 'w';
		holder->width = ft_atoi(s);
		free(s);
	}
	if (fmt->format[fmt->i] == 'c')
		ft_specifier_c(fmt, holder);
	else if (fmt->format[fmt->i] == 's')
		ft_specifier_s(fmt, holder);
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
	free(holder);
}
