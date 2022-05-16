/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_specifier_d_i.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eandre-f <eandre-f@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/13 00:27:03 by eandre-f          #+#    #+#             */
/*   Updated: 2022/05/16 02:57:25 by eandre-f         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libftprintf.h"

void	ft_specifier_d_i(t_format *fmt, t_holder *hdr)
{
	char	*s;
	int		d;
	size_t	len;

	d = (int)va_arg(fmt->ap, int);
	s = ft_itoa(d);
	if (hdr->flag_plus && ft_isdigit(s[0]))
		ft_strupd(&s, ft_strjoin("+", s));
	if (hdr->subspec_precision)
		ft_subspec_minimum_number(&s, '0', hdr->precision);
	len = ft_strlen(s);
	if (hdr->subspec_width && hdr->width > len)
	{
		if (hdr->flag_minus)
			hdr->flag_zero = 0;
		ft_subspec_buffer(hdr);
		ft_subspec_justify(hdr, s);
		len = hdr->width;
		ft_strupd(&s, ft_strdup(hdr->buffer));
	}
	if (hdr->flag_space && !ft_strchr(s, '-') && !ft_strchr(s, '+'))
			fmt->length += write(1, " ", 1);
	fmt->length += write(1, s, len);
	fmt->i++;
	free(s);
}
