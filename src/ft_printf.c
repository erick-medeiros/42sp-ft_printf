/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eandre-f <eandre-f@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/03 14:55:16 by eandre-f          #+#    #+#             */
/*   Updated: 2022/05/13 00:04:47 by eandre-f         ###   ########.fr       */
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
	t_format	*fmt;
	size_t		length;

	fmt = ft_initialize_format(format, ap);
	if (fmt == NULL)
		return (0);
	while (fmt->format[fmt->i] != '\0')
	{
		if (fmt->format[fmt->i] == '%')
			ft_placeholder(fmt);
		else
			fmt->length += write(1, &fmt->format[fmt->i++], 1);
	}
	length = fmt->length;
	free(fmt);
	return (length);
}
