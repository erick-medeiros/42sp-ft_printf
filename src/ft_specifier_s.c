/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_specifier_s.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eandre-f <eandre-f@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/13 00:23:47 by eandre-f          #+#    #+#             */
/*   Updated: 2022/05/15 02:38:14 by eandre-f         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libftprintf.h"

void	ft_specifier_s(t_format *fmt, t_holder *hdr)
{
	char		*s;
	char		*sn;
	size_t		len;

	sn = va_arg(fmt->ap, char *);
	if (sn == NULL)
		s = ft_strdup("(null)");
	else
		s = ft_strdup(sn);
	len = ft_strlen(s);
	if (hdr->subspec_dot)
	{
		if (sn != NULL)
		{
			if (hdr->subspec_width && !hdr->subspec_dot_width)
			{
				hdr->width = hdr->width_dot;
				ft_strupd(&s, ft_substr(s, 0, hdr->width));
				ft_subspec_buffer(hdr);
			}
			else if (hdr->subspec_width && !hdr->subspec_width_dot)
			{
				ft_strupd(&s, ft_substr(s, 0, hdr->width));
				hdr->width = ft_strlen(s);
				ft_subspec_buffer(hdr);
				ft_subspec_justify(hdr, s);
			}
			else
			{
				ft_strupd(&s, ft_substr(s, 0, hdr->width));
				hdr->width = hdr->width_dot;
				ft_subspec_buffer(hdr);
				ft_subspec_justify(hdr, s);
			}
			fmt->length += write(1, hdr->buffer, hdr->width);
			free(hdr->buffer);
		}
		else if (sn == NULL && hdr->width >= len)
			fmt->length += write(1, s, len);
	}
	else if (hdr->subspec_width && hdr->width > len)
	{
		ft_subspec_buffer(hdr);
		ft_subspec_justify(hdr, s);
		fmt->length += write(1, hdr->buffer, hdr->width);
		free(hdr->buffer);
	}
	else
		fmt->length += write(1, s, len);
	fmt->i++;
	free(s);
}
