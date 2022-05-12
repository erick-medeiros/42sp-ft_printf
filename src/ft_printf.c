/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eandre-f <eandre-f@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/03 14:55:16 by eandre-f          #+#    #+#             */
/*   Updated: 2022/05/12 02:41:02 by eandre-f         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libftprintf.h"

int	ft_printf(const char *format, ...)
{
	va_list	ap;
	int		len;

	if (format == NULL)
		return (0);
	va_start(ap, format);
	len = ft_vprintf(format, ap);
	va_end(ap);
	return (len);
}

int	ft_vprintf(const char *format, va_list ap)
{
	int		len;
	int		i;
	int		d;
	char	c;
	char	*p;
	char	*s;
	unsigned int ui;
	unsigned long int	uli;

	i = 0;
	len = 0;
	while (format[i] != '\0')
	{
		if (format[i] == '%')
		{
			i++;
			if (format[i] == 'c')
			{
				c = (char)va_arg(ap, int);
				write(1, &c, 1);
				i++;
				len++;
			}
			if (format[i] == 's')
			{
				s = va_arg(ap, char *);
				if (s == NULL)
				{
					write(1, "(null)", 6);
					len += 6;
				}
				else
				{
					write(1, s, ft_strlen(s));
					len += ft_strlen(s);
				}
				i++;
			}
			if (format[i] == 'p')
			{
				p = (void *)va_arg(ap, void *);
				uli = (unsigned long int) p;
				s = ft_ulitoa_base(uli, "0123456789abcdef");
				write(1, "0x", 2);
				write(1, s, ft_strlen(s));
				len += ft_strlen(s) + 2;
				free(s);
				i++;
			}
			if (format[i] == 'd' || format[i] == 'i')
			{
				d = (int)va_arg(ap, int);
				s = ft_itoa(d);
				write(1, s, ft_strlen(s));
				len += ft_strlen(s);
				free(s);
				i++;
			}
			if (format[i] == 'u')
			{
				ui = (unsigned int)va_arg(ap, unsigned int);
				s = ft_ulitoa_base(ui, "0123456789");
				write(1, s, ft_strlen(s));
				len += ft_strlen(s);
				free(s);
				i++;
			}
			if (format[i] == 'x')
			{
				uli = (unsigned long int)va_arg(ap, unsigned long int);
				s = ft_ulitoa_base(uli, "0123456789abcdef");
				write(1, s, ft_strlen(s));
				len += ft_strlen(s);
				free(s);
				i++;
			}
			if (format[i] == 'X')
			{
				uli = (unsigned long int)va_arg(ap, unsigned long int);
				s = ft_ulitoa_base(uli, "0123456789ABCDEF");
				write(1, s, ft_strlen(s));
				len += ft_strlen(s);
				free(s);
				i++;
			}
			if (format[i] == '%')
			{
				c = '%';
				write(1, &c, 1);
				len++;
				i++;
			}
		}
		else
		{
			write(1, &format[i++], 1);
			len++;
		}
	}
	return (len);
}
