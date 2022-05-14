/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_placeholder.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eandre-f <eandre-f@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/12 23:29:44 by eandre-f          #+#    #+#             */
/*   Updated: 2022/05/14 14:04:31 by eandre-f         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libftprintf.h"

void	ft_placeholder(t_format *fmt)
{
	t_holder	*hdr;

	hdr = ft_initialize_holder();
	fmt->i++;
	ft_placeholder_subspec(fmt, hdr);
	ft_sub_specifiers(fmt, hdr);
	if (fmt->format[fmt->i] == 'c')
		ft_specifier_c(fmt, hdr);
	else if (fmt->format[fmt->i] == 's')
		ft_specifier_s(fmt, hdr);
	else if (fmt->format[fmt->i] == 'p')
		ft_specifier_p(fmt, hdr);
	else if (fmt->format[fmt->i] == 'd' || fmt->format[fmt->i] == 'i')
		ft_specifier_d_i(fmt, hdr);
	else if (fmt->format[fmt->i] == 'u')
		ft_specifier_u(fmt, hdr);
	else if (fmt->format[fmt->i] == 'x')
		ft_specifier_x(fmt, hdr, "0x", "0123456789abcdef");
	else if (fmt->format[fmt->i] == 'X')
		ft_specifier_x(fmt, hdr, "0X", "0123456789ABCDEF");
	else if (fmt->format[fmt->i] == '%')
		ft_specifier_pct(fmt);
	free(hdr);
}

void	ft_placeholder_subspec(t_format *fmt, t_holder *hdr)
{
	if (fmt->format[fmt->i] == ' ')
	{
		hdr->subspec_space = 1;
		fmt->i++;
	}
	if (fmt->format[fmt->i] == '+')
	{
		hdr->subspec_plus = 1;
		fmt->i++;
	}
	if (fmt->format[fmt->i] == '#')
	{
		hdr->subspec_sharp = 1;
		fmt->i++;
	}
	if (fmt->format[fmt->i] == '-')
	{
		hdr->subspec_minus = 1;
		fmt->i++;
	}
	if (fmt->format[fmt->i] == '.')
	{
		hdr->subspec_dot = 1;
		fmt->i++;
	}
}
