/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sub_specifiers.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eandre-f <eandre-f@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/13 13:29:34 by eandre-f          #+#    #+#             */
/*   Updated: 2022/05/13 16:54:56 by eandre-f         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libftprintf.h"

void	ft_sub_specifiers(t_format *fmt, t_holder *hdr)
{
	int			start;
	char		*s;

	if (fmt->format[fmt->i] == '-')
	{
		hdr->subspec_minus = 1;
		fmt->i++;
	}
	if (ft_isdigit(fmt->format[fmt->i]))
	{
		start = fmt->i;
		while (ft_isdigit(fmt->format[fmt->i]))
			fmt->i++;
		s = ft_substr(&(fmt->format[start]), 0, fmt->i - start + 1);
		hdr->subspec_width = 1;
		hdr->width = ft_atoi(s);
		free(s);
		if (hdr->width <= 0)
			hdr->subspec_width = 0;
	}
}

void	ft_sub_specifier_minus(t_holder *hdr, char *str)
{
	char	*newstr;

	hdr->width_string = (char *)malloc(sizeof(char) * (hdr->width + 1));
	if (hdr->width_string == NULL)
		return ;
	ft_memset(hdr->width_string, ' ', hdr->width);
	hdr->width_string[hdr->width] = '\0';
	if (hdr->subspec_minus)
		newstr = ft_strjoin(str, hdr->width_string);
	else
		newstr = ft_strjoin(hdr->width_string, str);
	ft_strlcpy(hdr->width_string, newstr, hdr->width + 1);
	free(newstr);
}
