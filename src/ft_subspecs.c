/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_subspecs.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eandre-f <eandre-f@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/13 13:29:34 by eandre-f          #+#    #+#             */
/*   Updated: 2022/05/15 23:31:20 by eandre-f         ###   ########.fr       */
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

int	ft_subspec_space(t_holder *hdr, char *str)
{
	char	c;

	c = ' ';
	if (hdr->flag_space)
		if (!ft_strchr(str, '-') && !ft_strchr(str, '+'))
			return (write(1, &c, 1));
	return (0);
}

void	ft_subspec_dot(t_holder *hdr, char c)
{
	if (hdr->subspec_dot)
	{
		hdr->flag_zero = 1;
		if (c == '-')
			hdr->width++;
	}
}
