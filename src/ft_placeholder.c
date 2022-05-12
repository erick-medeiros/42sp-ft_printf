/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_placeholder.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eandre-f <eandre-f@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/12 23:29:44 by eandre-f          #+#    #+#             */
/*   Updated: 2022/05/13 00:03:55 by eandre-f         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libftprintf.h"

void	ft_placeholder(t_format *fmt)
{
	unsigned long long	ull;
	unsigned int		ui;
	char				*s;
	char				c;
	int					d;

	fmt->i++;
	if (fmt->format[fmt->i] == 'c')
	{
		c = (char)va_arg(fmt->ap, int);
		fmt->length += write(1, &c, 1);
		fmt->i++;
	}
	else if (fmt->format[fmt->i] == 's')
	{
		s = va_arg(fmt->ap, char *);
		if (s == NULL)
			fmt->length += write(1, "(null)", 6);
		else
			fmt->length += write(1, s, ft_strlen(s));
		fmt->i++;
	}
	else if (fmt->format[fmt->i] == 'p')
	{
		ull = (unsigned long long)va_arg(fmt->ap, void *);
		if (ull == 0)
		{
			fmt->length += write(1, "(nil)", 5);
		}
		else
		{
			s = ft_ulltoa_base(ull, "0123456789abcdef");
			fmt->length += write(1, "0x", 2);
			fmt->length += write(1, s, ft_strlen(s));
			free(s);
		}
		fmt->i++;
	}
	else if (fmt->format[fmt->i] == 'd' || fmt->format[fmt->i] == 'i')
	{
		d = (int)va_arg(fmt->ap, int);
		s = ft_itoa(d);
		fmt->length += write(1, s, ft_strlen(s));
		free(s);
		fmt->i++;
	}
	else if (fmt->format[fmt->i] == 'u')
	{
		ui = (unsigned int)va_arg(fmt->ap, unsigned int);
		s = ft_ulltoa_base(ui, "0123456789");
		fmt->length += write(1, s, ft_strlen(s));
		free(s);
		fmt->i++;
	}
	else if (fmt->format[fmt->i] == 'x')
	{
		ui = (unsigned int)va_arg(fmt->ap, unsigned int);
		s = ft_uitoa_base(ui, "0123456789abcdef");
		fmt->length += write(1, s, ft_strlen(s));
		free(s);
		fmt->i++;
	}
	else if (fmt->format[fmt->i] == 'X')
	{
		ui = (unsigned long)va_arg(fmt->ap, unsigned long);
		s = ft_uitoa_base(ui, "0123456789ABCDEF");
		fmt->length += write(1, s, ft_strlen(s));
		free(s);
		fmt->i++;
	}
	else if (fmt->format[fmt->i] == '%')
	{
		c = '%';
		fmt->length += write(1, &c, 1);
		fmt->i++;
	}
}
