/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_specifier_u.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eandre-f <eandre-f@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/13 00:31:18 by eandre-f          #+#    #+#             */
/*   Updated: 2022/05/14 02:28:28 by eandre-f         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libftprintf.h"

void	ft_specifier_u(t_format *fmt, t_holder *hdr)
{
	unsigned int	ui;
	char			*s;
	size_t			len;

	ui = (unsigned int)va_arg(fmt->ap, unsigned int);
	s = ft_ulltoa_base(ui, "0123456789");
	len = ft_strlen(s);
	if (hdr->subspec_width && hdr->width > len)
	{
		ft_subspec_zero(hdr, s);
		ft_subspec_printbuffer(hdr);
		ft_subspec_justify(hdr, s);
		fmt->length += write(1, hdr->buffer, hdr->width);
		free(hdr->buffer);
	}
	else
		fmt->length += write(1, s, len);
	fmt->i++;
	free(s);
}
