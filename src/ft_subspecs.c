/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_subspecs.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eandre-f <eandre-f@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/13 13:29:34 by eandre-f          #+#    #+#             */
/*   Updated: 2022/05/16 03:53:36 by eandre-f         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libftprintf.h"

void	ft_subspec_buffer(t_holder *hdr)
{
	hdr->buffer = (char *)malloc(sizeof(char) * (hdr->width + 1));
	if (!hdr->buffer)
		return ;
	if (hdr->flag_zero)
		ft_memset(hdr->buffer, '0', hdr->width);
	else
		ft_memset(hdr->buffer, ' ', hdr->width);
	hdr->buffer[hdr->width] = '\0';
}

void	ft_subspec_justify(t_holder *hdr, char *str)
{
	char	*newstr;
	size_t	index;

	if (hdr->flag_minus)
	{
		newstr = ft_strjoin(str, hdr->buffer);
		ft_strlcpy(hdr->buffer, newstr, hdr->width + 1);
	}
	else
	{
		newstr = ft_strjoin(hdr->buffer, str);
		index = ft_strlen(newstr) - hdr->width;
		if (hdr->flag_zero && str[0] == '-')
		{
			newstr[index] = '-';
			if (hdr->flag_zero)
				newstr[hdr->width] = '0';
			else
				newstr[hdr->width] = ' ';
		}
		ft_strlcpy(hdr->buffer, &newstr[index], hdr->width + 1);
	}
	free(newstr);
}

void	ft_subspec_minimum_number(char **str, char c, size_t size)
{
	char	*newstr;
	size_t	len;

	if (*str[0] == '-')
		size++;
	len = ft_strlen(*str);
	if (len >= size)
		return ;
	size = size - len;
	newstr = (char *)malloc(sizeof(char) * (size + 1));
	if (!newstr)
		return ;
	ft_memset(newstr, c, size);
	newstr[size] = '\0';
	if (*str[0] == '-')
	{
		newstr[0] = '-';
		*str[0] = c;
	}
	ft_strupd(str, ft_strjoin(newstr, *str));
	free(newstr);
}
