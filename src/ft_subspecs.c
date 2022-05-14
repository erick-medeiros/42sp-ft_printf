/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_subspecs.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eandre-f <eandre-f@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/13 13:29:34 by eandre-f          #+#    #+#             */
/*   Updated: 2022/05/14 23:22:03 by eandre-f         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libftprintf.h"

char	*ft_newstrset(size_t len, char c)
{
	char	*str;

	str = (char *)malloc(sizeof(char) * (len + 1));
	if (!str)
		return (NULL);
	ft_memset(str, c, len);
	str[len] = '\0';
	return (str);
}

void	ft_subspec_justify(t_holder *hdr, char *str)
{
	char	*newstr;
	size_t	index;

	if (hdr->subspec_zero)
		hdr->buffer = ft_newstrset(hdr->width, '0');
	else
		hdr->buffer = ft_newstrset(hdr->width, ' ');
	if (hdr->buffer == NULL)
		return ;
	if (hdr->subspec_minus)
	{
		newstr = ft_strjoin(str, hdr->buffer);
		ft_strlcpy(hdr->buffer, newstr, hdr->width + 1);
	}
	else
	{
		newstr = ft_strjoin(hdr->buffer, str);
		index = ft_strlen(newstr) - hdr->width;
		if (hdr->subspec_zero && str[0] == '-')
		{
			newstr[index] = '-';
			if (hdr->subspec_zero)
				newstr[hdr->width] = '0';
			else
				newstr[hdr->width] = ' ';
		}
		ft_strlcpy(hdr->buffer, &newstr[index], hdr->width + 1);
	}
	free(newstr);
}

void	ft_subspec_zero(t_holder *hdr, char *str)
{
	if (hdr->subspec_minus)
		hdr->subspec_zero = 0;
}

int	ft_subspec_space(t_holder *hdr, char *str)
{
	char	c;

	c = ' ';
	if (hdr->subspec_space)
		if (!ft_strchr(str, '-') && !ft_strchr(str, '+'))
			return (write(1, &c, 1));
	return (0);
}

void	ft_subspec_dot(t_holder *hdr, char c)
{
	if (hdr->subspec_dot)
	{
		hdr->subspec_zero = 1;
		if (c == '-')
			hdr->width++;
	}
}
