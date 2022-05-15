/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_specifier_p.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eandre-f <eandre-f@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/13 00:25:20 by eandre-f          #+#    #+#             */
/*   Updated: 2022/05/16 01:05:25 by eandre-f         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libftprintf.h"

void	ft_specifier_p(t_format *fmt, t_holder *hdr)
{
	unsigned long long	ull;
	char				*s;
	size_t				len;

	ull = (unsigned long long)va_arg(fmt->ap, void *);
	if (ull == 0)
		s = ft_strdup("(nil)");
	else
		s = ft_ulltoa_base(ull, "0123456789abcdef");
	len = ft_strlen(s);
	if (!hdr->subspec_width || !hdr->flag_zero || hdr->width < len + 2)
		ft_strupd(&s, ft_strjoin("0x", s));
	len = ft_strlen(s);
	if (hdr->subspec_width && hdr->width > len)
	{
		ft_subspec_buffer(hdr);
		ft_subspec_justify(hdr, s);
		if (hdr->flag_zero)
			hdr->buffer[1] = 'x';
		fmt->length += write(1, hdr->buffer, hdr->width);
	}
	else
		fmt->length += write(1, s, len);
	fmt->i++;
	free(s);
}
