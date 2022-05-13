/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_specifier_u.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eandre-f <eandre-f@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/13 00:31:18 by eandre-f          #+#    #+#             */
/*   Updated: 2022/05/13 23:31:31 by eandre-f         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libftprintf.h"

void	ft_specifier_u(t_format *fmt, t_holder *hdr)
{
	unsigned int	ui;
	char			*s;
	size_t			len;

	ui = (unsigned int)va_arg(fmt->ap, unsigned int);
	s = ft_ulltoa_base(ui, "0123456789");
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
