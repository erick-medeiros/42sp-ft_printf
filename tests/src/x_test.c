/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   x_test.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eandre-f <eandre-f@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/11 02:43:43 by eandre-f          #+#    #+#             */
/*   Updated: 2022/05/11 02:44:02 by eandre-f         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "utils.h"

void	x_test(int (*fn_printf)(const char *format, ...))
{
	fn_printf("character %x\n", 42);
	fn_printf("character %X\n", 42);
}
