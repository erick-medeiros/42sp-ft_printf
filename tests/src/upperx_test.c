/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   upperx_test.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eandre-f <eandre-f@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/12 15:01:08 by eandre-f          #+#    #+#             */
/*   Updated: 2022/05/14 03:02:55 by eandre-f         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "utils.h"

char	*upperx_test(int (*fn_print)(const char *format, ...))
{
	char	*len = alloc_len(33);
	len[0] = fn_print("character %X", 42); fn_print("\n");
	len[1] = fn_print(" %X ", 0); fn_print("\n");
	len[2] = fn_print(" %X ", -1); fn_print("\n");
	len[3] = fn_print(" %X ", 1); fn_print("\n");
	len[4] = fn_print(" %X ", 9); fn_print("\n");
	len[5] = fn_print(" %X ", 10); fn_print("\n");
	len[6] = fn_print(" %X ", 11); fn_print("\n");
	len[7] = fn_print(" %X ", 15); fn_print("\n");
	len[8] = fn_print(" %X ", 16); fn_print("\n");
	len[9] = fn_print(" %X ", 17); fn_print("\n");
	len[10] = fn_print(" %X ", 99); fn_print("\n");
	len[11] = fn_print(" %X ", 100); fn_print("\n");
	len[12] = fn_print(" %X ", 101); fn_print("\n");
	len[13] = fn_print(" %X ", -9); fn_print("\n");
	len[14] = fn_print(" %X ", -10); fn_print("\n");
	len[15] = fn_print(" %X ", -11); fn_print("\n");
	len[16] = fn_print(" %X ", -14); fn_print("\n");
	len[17] = fn_print(" %X ", -15); fn_print("\n");
	len[18] = fn_print(" %X ", -16); fn_print("\n");
	len[19] = fn_print(" %X ", -99); fn_print("\n");
	len[20] = fn_print(" %X ", -100); fn_print("\n");
	len[21] = fn_print(" %X ", -101); fn_print("\n");
	len[22] = fn_print(" %X ", INT_MAX); fn_print("\n");
	len[23] = fn_print(" %X ", INT_MIN); fn_print("\n");
	len[24] = fn_print(" %X ", LONG_MAX); fn_print("\n");
	len[25] = fn_print(" %X ", LONG_MIN); fn_print("\n");
	len[26] = fn_print(" %X ", UINT_MAX); fn_print("\n");
	len[27] = fn_print(" %X ", ULONG_MAX); fn_print("\n");
	len[28] = fn_print(" %X ", 9223372036854775807LL); fn_print("\n");
	len[29] = fn_print(" %X %X %X %X %X %X %X", INT_MAX, INT_MIN, LONG_MAX, LONG_MIN, ULONG_MAX, 0, -42); fn_print("\n");
	len[30] = fn_print(" %X ", 42); fn_print("\n");
	len[31] = fn_print(" %X ", -42); fn_print("\n");
	return (len);
}
