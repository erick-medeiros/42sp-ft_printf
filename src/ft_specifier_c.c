/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_specifier_c.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eandre-f <eandre-f@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/13 00:18:36 by eandre-f          #+#    #+#             */
/*   Updated: 2022/05/13 00:20:19 by eandre-f         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libftprintf.h"

void	ft_specifier_c(t_format *fmt)
{
	char	c;

	c = (char)va_arg(fmt->ap, int);
	fmt->length += write(1, &c, 1);
	fmt->i++;
}
