/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   upperx_test.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eandre-f <eandre-f@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/12 15:01:08 by eandre-f          #+#    #+#             */
/*   Updated: 2022/05/12 15:03:53 by eandre-f         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "utils.h"
#include <limits.h>

void	upperx_test(int (*fn_printf)(const char *format, ...))
{
	fn_printf("character %X\n", 42);
	fn_printf(" %X ", 0); fn_printf("\n");
	fn_printf(" %X ", -1); fn_printf("\n");
	fn_printf(" %X ", 1); fn_printf("\n");
	fn_printf(" %X ", 9); fn_printf("\n");
	fn_printf(" %X ", 10); fn_printf("\n");
	fn_printf(" %X ", 11); fn_printf("\n");
	fn_printf(" %X ", 15); fn_printf("\n");
	fn_printf(" %X ", 16); fn_printf("\n");
	fn_printf(" %X ", 17); fn_printf("\n");
	fn_printf(" %X ", 99); fn_printf("\n");
	fn_printf(" %X ", 100); fn_printf("\n");
	fn_printf(" %X ", 101); fn_printf("\n");
	fn_printf(" %X ", -9); fn_printf("\n");
	fn_printf(" %X ", -10); fn_printf("\n");
	fn_printf(" %X ", -11); fn_printf("\n");
	fn_printf(" %X ", -14); fn_printf("\n");
	fn_printf(" %X ", -15); fn_printf("\n");
	fn_printf(" %X ", -16); fn_printf("\n");
	fn_printf(" %X ", -99); fn_printf("\n");
	fn_printf(" %X ", -100); fn_printf("\n");
	fn_printf(" %X ", -101); fn_printf("\n");
	fn_printf(" %X ", INT_MAX); fn_printf("\n");
	fn_printf(" %X ", INT_MIN); fn_printf("\n");
	fn_printf(" %X ", LONG_MAX); fn_printf("\n");
	fn_printf(" %X ", LONG_MIN); fn_printf("\n");
	fn_printf(" %X ", UINT_MAX); fn_printf("\n");
	fn_printf(" %X ", ULONG_MAX); fn_printf("\n");
	fn_printf(" %X ", 9223372036854775807LL); fn_printf("\n");
	fn_printf(" %X %X %X %X %X %X %X", INT_MAX, INT_MIN, LONG_MAX, LONG_MIN, ULONG_MAX, 0, -42); fn_printf("\n");
	fn_printf(" %X ", 42); fn_printf("\n");
	fn_printf(" %X ", -42); fn_printf("\n");
}
