/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   s_test.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eandre-f <eandre-f@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/08 16:15:25 by eandre-f          #+#    #+#             */
/*   Updated: 2022/05/08 16:15:43 by eandre-f         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "utils.h"

void	s_test(int (*fn_printf)(const char *format, ...))
{
	fn_printf("character %s\n", "string");
}
