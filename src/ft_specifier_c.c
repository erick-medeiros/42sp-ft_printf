/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_specifier_c.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eandre-f <eandre-f@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/13 00:18:36 by eandre-f          #+#    #+#             */
/*   Updated: 2022/05/15 23:53:06 by eandre-f         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libftprintf.h"

void	ft_specifier_c(t_format *fmt, t_holder *hdr)
{
	char	c;

	c = (char)va_arg(fmt->ap, int);
	if (hdr->subspec_width)
	{
		ft_subspec_buffer(hdr);
		ft_subspec_justify(hdr, "");
		if (hdr->flag_minus)
			hdr->buffer[0] = c;
		else
			hdr->buffer[hdr->width - 1] = c;
		fmt->length += write(1, hdr->buffer, hdr->width);
	}
	else
		fmt->length += write(1, &c, 1);
	fmt->i++;
}
