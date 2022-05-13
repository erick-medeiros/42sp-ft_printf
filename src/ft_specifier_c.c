/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_specifier_c.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eandre-f <eandre-f@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/13 00:18:36 by eandre-f          #+#    #+#             */
/*   Updated: 2022/05/13 03:17:36 by eandre-f         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libftprintf.h"

void	ft_specifier_c(t_format *fmt, t_holder *holder)
{
	char	c;
	char	*s;

	c = (char)va_arg(fmt->ap, int);
	if (holder->flag_width != '\0')
	{
		s = (char *)malloc(sizeof(char) * (holder->width + 1));
		if (s == NULL)
			return ;
		ft_memset(s, ' ', holder->width);
		s[holder->width] = '\0';
		if (holder->flag_minus != '\0')
			s[0] = c;
		else
			s[holder->width - 1] = c;
		fmt->length += write(1, s, holder->width);
		free(s);
	}
	else
	{
		fmt->length += write(1, &c, 1);
	}
	fmt->i++;
}
