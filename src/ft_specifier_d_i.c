/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_specifier_d_i.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eandre-f <eandre-f@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/13 00:27:03 by eandre-f          #+#    #+#             */
/*   Updated: 2022/05/13 23:01:41 by eandre-f         ###   ########.fr       */
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
	len = ft_strlen(s);
	if (hdr->subspec_width && hdr->width > len)
	{
		ft_sub_specifier_minus(hdr, s);
		fmt->length += write(1, hdr->width_string, hdr->width);
		free(hdr->width_string);
	}
	else
		fmt->length += write(1, s, len);
	fmt->i++;
	free(s);
}
