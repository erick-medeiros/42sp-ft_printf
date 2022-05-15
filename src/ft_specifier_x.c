/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_specifier_x.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eandre-f <eandre-f@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/13 00:33:05 by eandre-f          #+#    #+#             */
/*   Updated: 2022/05/15 23:55:04 by eandre-f         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libftprintf.h"

void	ft_specifier_x(t_format *fmt, t_holder *hdr, char *prefix, char *base)
{
	unsigned int	ui;
	char			*s;
	size_t			len;

	ui = (unsigned int)va_arg(fmt->ap, unsigned int);
	s = ft_uitoa_base(ui, base);
	if (hdr->flag_numbersign && ui > 0)
		ft_strupd(&s, ft_strjoin(prefix, s));
	len = ft_strlen(s);
	if (hdr->subspec_dot)
		hdr->flag_zero = 1;
	if (hdr->subspec_width && hdr->width > len)
	{
		if (hdr->flag_minus)
			hdr->flag_zero = 0;
		ft_subspec_buffer(hdr);
		ft_subspec_justify(hdr, s);
		fmt->length += write(1, hdr->buffer, hdr->width);
	}
	else
		fmt->length += write(1, s, len);
	fmt->i++;
	free(s);
}
