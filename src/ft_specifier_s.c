/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_specifier_s.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eandre-f <eandre-f@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/13 00:23:47 by eandre-f          #+#    #+#             */
/*   Updated: 2022/05/14 04:24:00 by eandre-f         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libftprintf.h"

void	ft_specifier_s(t_format *fmt, t_holder *hdr)
{
	char		*s;
	size_t		len;

	s = va_arg(fmt->ap, char *);
	if (s == NULL)
		s = ft_strdup("(null)");
	else
		s = ft_strdup(s);
	len = ft_strlen(s);
	if (hdr->subspec_dot)
	{
		if (hdr->width > len)
			fmt->length += write(1, s, len);
		else
			fmt->length += write(1, s, hdr->width);
	}
	else if (hdr->subspec_width && hdr->width > len)
	{
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
