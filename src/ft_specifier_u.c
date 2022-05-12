/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_specifier_u.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eandre-f <eandre-f@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/13 00:31:18 by eandre-f          #+#    #+#             */
/*   Updated: 2022/05/13 00:40:48 by eandre-f         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libftprintf.h"

void	ft_specifier_u(t_format *fmt)
{
	unsigned int	ui;
	char			*s;

	ui = (unsigned int)va_arg(fmt->ap, unsigned int);
	s = ft_ulltoa_base(ui, "0123456789");
	fmt->length += write(1, s, ft_strlen(s));
	free(s);
	fmt->i++;
}
