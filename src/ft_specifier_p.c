/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_specifier_p.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eandre-f <eandre-f@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/13 00:25:20 by eandre-f          #+#    #+#             */
/*   Updated: 2022/05/15 00:03:37 by eandre-f         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libftprintf.h"

void	ft_specifier_p(t_format *fmt, t_holder *hdr)
{
	unsigned long long	ull;
	char				*s;
	char				*s2;

	ull = (unsigned long long)va_arg(fmt->ap, void *);
	if (ull == 0)
		s = ft_strdup("(nil)");
	else
	{
		s2 = ft_ulltoa_base(ull, "0123456789abcdef");
		s = ft_strjoin("0x", s2);
		free(s2);
	}
	if (hdr->subspec_width && hdr->width > ft_strlen(s))
	{
		ft_subspec_buffer(hdr);
		ft_subspec_justify(hdr, s);
		fmt->length += write(1, hdr->buffer, hdr->width);
		free(hdr->buffer);
	}
	else
		fmt->length += write(1, s, ft_strlen(s));
	fmt->i++;
	free(s);
}
