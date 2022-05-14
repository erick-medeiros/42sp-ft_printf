/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   p_test.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eandre-f <eandre-f@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/08 21:40:32 by eandre-f          #+#    #+#             */
/*   Updated: 2022/05/14 03:01:43 by eandre-f         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "utils.h"

char *test = "teste";

char *p_test(int (*fn_print)(const char *format, ...))
{
	char	*len = alloc_len(11);
	len[0] = fn_print("pointer %p", &test); fn_print("\n");
	len[1] = fn_print(" %p ", -1); fn_print("\n");
	len[2] = fn_print(" %p ", 1); fn_print("\n");
	len[3] = fn_print(" %p ", 15); fn_print("\n");
	len[4] = fn_print(" %p ", 16); fn_print("\n");
	len[5] = fn_print(" %p ", 17); fn_print("\n");
	len[6] = fn_print(" %p %p ", LONG_MIN, LONG_MAX); fn_print("\n");
	len[7] = fn_print(" %p %p ", INT_MIN, INT_MAX); fn_print("\n");
	len[8] = fn_print(" %p %p ", ULONG_MAX, -ULONG_MAX); fn_print("\n");
	len[9] = fn_print(" %p %p ", 0, 0); fn_print("\n");
	return (len);
}
