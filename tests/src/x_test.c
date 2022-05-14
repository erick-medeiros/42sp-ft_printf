/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   x_test.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eandre-f <eandre-f@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/11 02:43:43 by eandre-f          #+#    #+#             */
/*   Updated: 2022/05/14 03:03:07 by eandre-f         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "utils.h"

char	*x_test(int (*fn_print)(const char *format, ...))
{
	char	*len = alloc_len(33);
	len[0] = fn_print("character %x", 42); fn_print("\n");
	len[1] = fn_print(" %x ", 0); fn_print("\n");
	len[2] = fn_print(" %x ", -1); fn_print("\n");
	len[3] = fn_print(" %x ", 1); fn_print("\n");
	len[4] = fn_print(" %x ", 9); fn_print("\n");
	len[5] = fn_print(" %x ", 10); fn_print("\n");
	len[6] = fn_print(" %x ", 11); fn_print("\n");
	len[7] = fn_print(" %x ", 15); fn_print("\n");
	len[8] = fn_print(" %x ", 16); fn_print("\n");
	len[9] = fn_print(" %x ", 17); fn_print("\n");
	len[10] = fn_print(" %x ", 99); fn_print("\n");
	len[11] = fn_print(" %x ", 100); fn_print("\n");
	len[12] = fn_print(" %x ", 101); fn_print("\n");
	len[13] = fn_print(" %x ", -9); fn_print("\n");
	len[14] = fn_print(" %x ", -10); fn_print("\n");
	len[15] = fn_print(" %x ", -11); fn_print("\n");
	len[16] = fn_print(" %x ", -14); fn_print("\n");
	len[17] = fn_print(" %x ", -15); fn_print("\n");
	len[18] = fn_print(" %x ", -16); fn_print("\n");
	len[19] = fn_print(" %x ", -99); fn_print("\n");
	len[20] = fn_print(" %x ", -100); fn_print("\n");
	len[21] = fn_print(" %x ", -101); fn_print("\n");
	len[22] = fn_print(" %x ", INT_MAX); fn_print("\n");
	len[23] = fn_print(" %x ", INT_MIN); fn_print("\n");
	len[24] = fn_print(" %x ", LONG_MAX); fn_print("\n");
	len[25] = fn_print(" %x ", LONG_MIN); fn_print("\n");
	len[26] = fn_print(" %x ", UINT_MAX); fn_print("\n");
	len[27] = fn_print(" %x ", ULONG_MAX); fn_print("\n");
	len[28] = fn_print(" %x ", 9223372036854775807LL); fn_print("\n");
	len[29] = fn_print(" %x %x %x %x %x %x %x", INT_MAX, INT_MIN, LONG_MAX, LONG_MIN, ULONG_MAX, 0, -42); fn_print("\n");
	len[30] = fn_print(" %x ", 42); fn_print("\n");
	len[31] = fn_print(" %x ", -42); fn_print("\n");
	return (len);
}
