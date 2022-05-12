/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_specifier_p.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eandre-f <eandre-f@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/13 00:25:20 by eandre-f          #+#    #+#             */
/*   Updated: 2022/05/13 00:40:37 by eandre-f         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libftprintf.h"

void	ft_specifier_p(t_format *fmt)
{
	unsigned long long	ull;
	char				*s;

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
