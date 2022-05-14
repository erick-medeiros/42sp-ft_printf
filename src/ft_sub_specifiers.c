/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sub_specifiers.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eandre-f <eandre-f@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/13 13:29:34 by eandre-f          #+#    #+#             */
/*   Updated: 2022/05/14 02:17:37 by eandre-f         ###   ########.fr       */
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
		else if (hdr->subspec_width && fmt->format[start] == '0')
			hdr->subspec_zero = 1;
	}
}

void	ft_subspec_printbuffer(t_holder *hdr)
{
	hdr->width_string = (char *)malloc(sizeof(char) * (hdr->width + 1));
	if (hdr->width_string == NULL)
		return ;
	ft_memset(hdr->width_string, hdr->c_set, hdr->width);
	hdr->width_string[hdr->width] = '\0';
}

void	ft_subspec_justify(t_holder *hdr, char *str)
{
	char	*newstr;
	size_t	index;

	if (hdr->subspec_minus)
	{
		newstr = ft_strjoin(str, hdr->width_string);
		ft_strlcpy(hdr->width_string, newstr, hdr->width + 1);
	}
	else
	{
		newstr = ft_strjoin(hdr->width_string, str);
		index = ft_strlen(newstr) - hdr->width;
		if (hdr->subspec_zero && str[0] == '-')
		{
			newstr[index] = '-';
			newstr[hdr->width] = hdr->c_set;
		}
		ft_strlcpy(hdr->width_string, &newstr[index], hdr->width + 1);
	}
	free(newstr);
}

void	ft_subspec_zero(t_holder *hdr, char *str)
{
	if (hdr->subspec_zero && !hdr->subspec_minus)
		hdr->c_set = '0';
}
