/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_placeholder.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eandre-f <eandre-f@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/12 23:29:44 by eandre-f          #+#    #+#             */
/*   Updated: 2022/05/16 02:49:48 by eandre-f         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libftprintf.h"

void	ft_placeholder(t_format *fmt)
{
	t_holder	*hdr;

	hdr = ft_initialize_holder();
	fmt->i++;
	ft_placeholder_subspec(fmt, hdr);
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
	if (hdr->buffer)
		free(hdr->buffer);
	free(hdr);
}

void	ft_placeholder_subspec(t_format *fmt, t_holder *hdr)
{
	if (fmt->format[fmt->i] == ' ')
		hdr->flag_space = 1;
	while (fmt->format[fmt->i] == ' ')
		fmt->i++;
	if (fmt->format[fmt->i] == '+')
		hdr->flag_plus = 1;
	while (fmt->format[fmt->i] == '+')
		fmt->i++;
	if (fmt->format[fmt->i] == '#')
		hdr->flag_numbersign = 1;
	fmt->i += hdr->flag_numbersign;
	if (fmt->format[fmt->i] == '-')
		hdr->flag_minus = 1;
	fmt->i += hdr->flag_minus;
	if (ft_isdigit(fmt->format[fmt->i]))
		ft_placeholder_subspec_width(fmt, hdr);
	if (fmt->format[fmt->i] == '.')
	{
		hdr->subspec_dot = 1;
		hdr->subspec_precision = 1;
	}
	fmt->i += hdr->subspec_dot;
	if (ft_isdigit(fmt->format[fmt->i]) && hdr->subspec_dot)
		ft_placeholder_subspec_precision(fmt, hdr);
}

void	ft_placeholder_subspec_width(t_format *fmt, t_holder *hdr)
{
	hdr->width = ft_atoi(&(fmt->format[fmt->i]));
	if (hdr->width > 0)
		hdr->subspec_width = 1;
	if (hdr->subspec_width && fmt->format[fmt->i] == '0')
		hdr->flag_zero = 1;
	while (ft_isdigit(fmt->format[fmt->i]))
		fmt->i++;
}

void	ft_placeholder_subspec_precision(t_format *fmt, t_holder *hdr)
{
	hdr->precision = ft_atoi(&(fmt->format[fmt->i]));
	while (ft_isdigit(fmt->format[fmt->i]))
		fmt->i++;
}
