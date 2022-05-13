/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_specifier_s.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eandre-f <eandre-f@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/13 00:23:47 by eandre-f          #+#    #+#             */
/*   Updated: 2022/05/13 04:27:06 by eandre-f         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libftprintf.h"
#include <stdio.h>

void	ft_specifier_s(t_format *fmt, t_holder *holder)
{
	char	*s;
	char	*sc1;
	char	*sc2;

	s = ft_strdup(va_arg(fmt->ap, char *));
	if (s == NULL)
		s = ft_strdup("(null)");
	if (holder->flag_width != '\0')
	{
		if (ft_strlen(s) >= holder->width)
		{
			fmt->length += write(1, s, ft_strlen(s));
		}
		else
		{
			sc1 = (char *)malloc(sizeof(char) * (holder->width + 1));
			if (sc1 == NULL)
				return ;
			ft_memset(sc1, ' ', holder->width);
			sc1[holder->width] = '\0';
			if (holder->flag_minus != '\0')
				sc2 = ft_strjoin(s, sc1);
			else
				sc2 = ft_strjoin(sc1, s);
			ft_strlcpy(sc1, sc2, holder->width);
			fmt->length += write(1, sc2, holder->width);
			free(sc1);
			free(sc2);
		}
		free(s);
	}
	else
	{
		fmt->length += write(1, s, ft_strlen(s));
		free(s);
	}
	fmt->i++;
}
