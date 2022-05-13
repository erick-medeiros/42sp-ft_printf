/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_specifier_s.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eandre-f <eandre-f@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/13 00:23:47 by eandre-f          #+#    #+#             */
/*   Updated: 2022/05/13 16:55:18 by eandre-f         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libftprintf.h"

void	ft_specifier_s(t_format *fmt, t_holder *hdr)
{
	char	*s;
	char	*sjoin;

	s = ft_strdup(va_arg(fmt->ap, char *));
	if (s == NULL)
		s = ft_strdup("(null)");
	if (hdr->subspec_width && hdr->width > ft_strlen(s))
	{
		ft_sub_specifier_minus(hdr, s);
		fmt->length += write(1, hdr->width_string, hdr->width);
		free(hdr->width_string);
	}
	else
	{
		fmt->length += write(1, s, ft_strlen(s));
	}
	free(s);
	fmt->i++;
}
