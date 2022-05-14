/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_specifier_d_i.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eandre-f <eandre-f@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/13 00:27:03 by eandre-f          #+#    #+#             */
/*   Updated: 2022/05/14 07:35:49 by eandre-f         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libftprintf.h"

void	ft_specifier_d_i(t_format *fmt, t_holder *hdr)
{
	char	*s;
	char	*temp;
	int		d;
	size_t	len;

	d = (int)va_arg(fmt->ap, int);
	s = ft_itoa(d);
	len = ft_strlen(s);
	if (hdr->subspec_plus && ft_isdigit(s[0]))
	{
		temp = s;
		s = ft_strjoin("+", temp);
		len = ft_strlen(s);
		free(temp);
	}
	if (hdr->subspec_dot)
	{
		hdr->subspec_zero = 1;
		if (s[0] == '-')
			hdr->width++;
	}
	if (hdr->subspec_width && hdr->width > len)
	{
		ft_subspec_zero(hdr, s);
		ft_subspec_printbuffer(hdr);
		ft_subspec_justify(hdr, s);
		if (hdr->subspec_space)
			fmt->length += ft_subspec_space(hdr, hdr->buffer);
		fmt->length += write(1, hdr->buffer, hdr->width);
		free(hdr->buffer);
	}
	else
	{
		if (hdr->subspec_space)
			fmt->length += ft_subspec_space(hdr, s);
		fmt->length += write(1, s, len);
	}
	fmt->i++;
	free(s);
}
