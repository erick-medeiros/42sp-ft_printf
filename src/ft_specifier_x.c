/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_specifier_x.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eandre-f <eandre-f@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/13 00:33:05 by eandre-f          #+#    #+#             */
/*   Updated: 2022/05/13 00:40:18 by eandre-f         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libftprintf.h"

void	ft_specifier_x(t_format *fmt, char *base)
{
	unsigned int	ui;
	char			*s;

	ui = (unsigned int)va_arg(fmt->ap, unsigned int);
	s = ft_uitoa_base(ui, base);
	fmt->length += write(1, s, ft_strlen(s));
	free(s);
	fmt->i++;
}
