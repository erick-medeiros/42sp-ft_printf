/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_specifier_x.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eandre-f <eandre-f@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/13 00:33:05 by eandre-f          #+#    #+#             */
/*   Updated: 2022/05/16 05:21:10 by eandre-f         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libftprintf.h"

void	ft_specifier_x(t_format *fmt, t_holder *hdr, char *prefix, char *base)
{
	unsigned int	ui;
	char			*s;

	ui = (unsigned int)va_arg(fmt->ap, unsigned int);
	s = ft_uitoa_base(ui, base);
	if (hdr->flag_numbersign && ui > 0)
		ft_strupd(&s, ft_strjoin(prefix, s));
	if (hdr->subspec_precision && hdr->precision == 0 && ui == 0)
		ft_strupd(&s, ft_strdup(""));
	else if (hdr->subspec_precision)
		ft_subspec_minimum_number(&s, '0', hdr->precision);
	if (hdr->subspec_width && hdr->width > ft_strlen(s))
	{
		if (hdr->flag_minus)
			hdr->flag_zero = 0;
		ft_subspec_buffer(hdr);
		ft_subspec_justify(hdr, s);
		fmt->length += write(1, hdr->buffer, hdr->width);
	}
	else
		fmt->length += write(1, s, ft_strlen(s));
	fmt->i++;
	free(s);
}
