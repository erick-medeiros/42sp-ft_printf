/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   p_test.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eandre-f <eandre-f@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/08 21:40:32 by eandre-f          #+#    #+#             */
/*   Updated: 2022/05/12 14:35:38 by eandre-f         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "utils.h"
#include <limits.h>

char *test = "teste";

void	p_test(int (*fn_printf)(const char *format, ...))
{
	fn_printf("pointer %p\n", &test);
	fn_printf(" %p ", -1); fn_printf("\n");
	fn_printf(" %p ", 1); fn_printf("\n");
	fn_printf(" %p ", 15); fn_printf("\n");
	fn_printf(" %p ", 16); fn_printf("\n");
	fn_printf(" %p ", 17); fn_printf("\n");
	fn_printf(" %p %p ", LONG_MIN, LONG_MAX); fn_printf("\n");
	fn_printf(" %p %p ", INT_MIN, INT_MAX); fn_printf("\n");
	fn_printf(" %p %p ", ULONG_MAX, -ULONG_MAX); fn_printf("\n");
	fn_printf(" %p %p ", 0, 0); fn_printf("\n");
}
