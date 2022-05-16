/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_specifier_u.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eandre-f <eandre-f@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/13 00:31:18 by eandre-f          #+#    #+#             */
/*   Updated: 2022/05/16 15:43:10 by eandre-f         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libftprintf.h"

void	ft_specifier_u(t_format *fmt, t_holder *hdr)
{
	unsigned int	ui;
	char			*s;

	ui = (unsigned int)va_arg(fmt->ap, unsigned int);
	s = ft_ulltoa_base(ui, "0123456789");
	if (hdr->flag_minus)
			hdr->flag_zero = 0;
	if (hdr->subspec_precision && hdr->precision == 0 && ui == 0)
		ft_strupd(&s, ft_strdup(""));
	else if (hdr->subspec_precision)
		ft_subspec_minimum_number(&s, '0', hdr->precision);
	hdr->length = ft_strlen(s);
	if (hdr->subspec_width && hdr->width > hdr->length)
		ft_subspec_justify(&s, hdr);
	fmt->length += write(1, s, hdr->length);
	fmt->i++;
	free(s);
}
