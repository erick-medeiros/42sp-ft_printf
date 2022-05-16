/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_specifier_p.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eandre-f <eandre-f@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/13 00:25:20 by eandre-f          #+#    #+#             */
/*   Updated: 2022/05/16 15:40:03 by eandre-f         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libftprintf.h"

void	ft_specifier_p(t_format *fmt, t_holder *hdr)
{
	unsigned long long	ull;
	char				*s;

	ull = (unsigned long long)va_arg(fmt->ap, void *);
	if (ull == 0)
		s = ft_strdup("(nil)");
	else
		s = ft_ulltoa_base(ull, "0123456789abcdef");
	hdr->length = ft_strlen(s);
	if (!hdr->subspec_width || !hdr->flag_zero || hdr->width < hdr->length + 2)
		if (ull > 0)
			ft_strupd(&s, ft_strjoin("0x", s));
	hdr->length = ft_strlen(s);
	if (hdr->subspec_width && hdr->width > hdr->length)
	{
		ft_subspec_justify(&s, hdr);
		if (hdr->flag_zero)
			s[1] = 'x';
	}
	fmt->length += write(1, s, hdr->length);
	fmt->i++;
	free(s);
}
