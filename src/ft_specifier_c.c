/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_specifier_c.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eandre-f <eandre-f@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/13 00:18:36 by eandre-f          #+#    #+#             */
/*   Updated: 2022/05/14 00:38:53 by eandre-f         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libftprintf.h"

void	ft_specifier_c(t_format *fmt, t_holder *hdr)
{
	char	c;

	c = (char)va_arg(fmt->ap, int);
	if (hdr->subspec_width)
	{
		ft_subspec_printbuffer(hdr);
		ft_subspec_justify(hdr, "");
		if (hdr->subspec_minus)
			hdr->width_string[0] = c;
		else
			hdr->width_string[hdr->width - 1] = c;
		fmt->length += write(1, hdr->width_string, hdr->width);
		free(hdr->width_string);
	}
	else
		fmt->length += write(1, &c, 1);
	fmt->i++;
}
