/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_specifier_d_i.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eandre-f <eandre-f@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/13 00:27:03 by eandre-f          #+#    #+#             */
/*   Updated: 2022/05/15 00:10:58 by eandre-f         ###   ########.fr       */
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
	if (hdr->subspec_plus && ft_isdigit(s[0]))
		ft_strupd(&s, ft_strjoin("+", s));
	ft_subspec_dot(hdr, s[0]);
	len = ft_strlen(s);
	if (hdr->subspec_width && hdr->width > len)
	{
		ft_subspec_zero(hdr, s);
		ft_subspec_buffer(hdr);
		ft_subspec_justify(hdr, s);
		len = hdr->width;
		ft_strupd(&s, ft_strdup(hdr->buffer));
		free(hdr->buffer);
	}
	fmt->length += ft_subspec_space(hdr, s);
	fmt->length += write(1, s, len);
	fmt->i++;
	free(s);
}
