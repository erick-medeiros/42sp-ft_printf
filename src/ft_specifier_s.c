/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_specifier_s.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eandre-f <eandre-f@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/13 00:23:47 by eandre-f          #+#    #+#             */
/*   Updated: 2022/05/16 05:30:57 by eandre-f         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libftprintf.h"

void	ft_specifier_s(t_format *fmt, t_holder *hdr)
{
	char		*s;
	char		*sn;

	sn = va_arg(fmt->ap, char *);
	if (sn == NULL)
		s = ft_strdup("(null)");
	else
		s = ft_strdup(sn);
	hdr->flag_zero = 0;
	if (hdr->subspec_precision && (sn || hdr->precision >= 6))
		ft_strupd(&s, ft_substr(s, 0, hdr->precision));
	else if (hdr->subspec_precision)
		ft_strupd(&s, ft_strdup(""));
	if (hdr->subspec_width && hdr->width > ft_strlen(s))
	{
		ft_subspec_justify(hdr, s);
		fmt->length += write(1, hdr->buffer, hdr->width);
	}
	else
		fmt->length += write(1, s, ft_strlen(s));
	fmt->i++;
	free(s);
}
