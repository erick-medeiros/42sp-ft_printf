/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   x_test.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eandre-f <eandre-f@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/11 02:43:43 by eandre-f          #+#    #+#             */
/*   Updated: 2022/05/12 15:15:47 by eandre-f         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "utils.h"
#include <limits.h>

void	x_test(int (*fn_printf)(const char *format, ...))
{
	// /*1*/fn_printf("character %x\n", 42);
	// /*2*/fn_printf(" %x ", 0); fn_printf("\n");
	// /*3*/fn_printf(" %x ", -1); fn_printf("\n");
	// /*4*/fn_printf(" %x ", 1); fn_printf("\n");
	// /*5*/fn_printf(" %x ", 9); fn_printf("\n");
	// /*6*/fn_printf(" %x ", 10); fn_printf("\n");
	// /*7*/fn_printf(" %x ", 11); fn_printf("\n");
	// /*8*/fn_printf(" %x ", 15); fn_printf("\n");
	// /*9*/fn_printf(" %x ", 16); fn_printf("\n");
	// /*10*/fn_printf(" %x ", 17); fn_printf("\n");
	// /*11*/fn_printf(" %x ", 99); fn_printf("\n");
	// /*12*/fn_printf(" %x ", 100); fn_printf("\n");
	// /*13*/fn_printf(" %x ", 101); fn_printf("\n");
	// /*14*/fn_printf(" %x ", -9); fn_printf("\n");
	// /*15*/fn_printf(" %x ", -10); fn_printf("\n");
	// /*16*/fn_printf(" %x ", -11); fn_printf("\n");
	// /*17*/fn_printf(" %x ", -14); fn_printf("\n");
	// /*18*/fn_printf(" %x ", -15); fn_printf("\n");
	// /*19*/fn_printf(" %x ", -16); fn_printf("\n");
	// /*20*/fn_printf(" %x ", -99); fn_printf("\n");
	// /*21*/fn_printf(" %x ", -100); fn_printf("\n");
	// /*22*/fn_printf(" %x ", -101); fn_printf("\n");
	// /*23*/fn_printf(" %x ", INT_MAX); fn_printf("\n");
	// /*24*/fn_printf(" %x ", INT_MIN); fn_printf("\n");
	/*25*/fn_printf(" %x ", LONG_MAX); fn_printf("\n");
	/*26*/fn_printf(" %x ", LONG_MIN); fn_printf("\n");
	/*27*/fn_printf(" %x ", UINT_MAX); fn_printf("\n");
	/*28*/fn_printf(" %x ", ULONG_MAX); fn_printf("\n");
	/*29*/fn_printf(" %x ", 9223372036854775807LL); fn_printf("\n");
	/*30*/fn_printf(" %x %x %x %x %x %x %x", INT_MAX, INT_MIN, LONG_MAX, LONG_MIN, ULONG_MAX, 0, -42); fn_printf("\n");
	/*31*/fn_printf(" %x ", 42); fn_printf("\n");
	/*32*/fn_printf(" %x ", -42); fn_printf("\n");
}
