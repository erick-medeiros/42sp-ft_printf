/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_specifier_x.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eandre-f <eandre-f@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/13 00:33:05 by eandre-f          #+#    #+#             */
/*   Updated: 2022/05/14 05:38:39 by eandre-f         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libftprintf.h"

void	ft_specifier_x(t_format *fmt, t_holder *hdr, char *prefix, char *base)
{
	unsigned int	ui;
	char			*s;
	char			*temp;
	size_t			len;

	ui = (unsigned int)va_arg(fmt->ap, unsigned int);
	s = ft_uitoa_base(ui, base);
	if (hdr->subspec_sharp && ui > 0)
	{
		temp = s;
		s = ft_strjoin(prefix, temp);
		free(temp);
	}
	len = ft_strlen(s);
	if (hdr->subspec_dot)
		hdr->subspec_zero = 1;
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
