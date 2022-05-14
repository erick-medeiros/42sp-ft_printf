/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sharp_test.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eandre-f <eandre-f@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/14 05:23:39 by eandre-f          #+#    #+#             */
/*   Updated: 2022/05/14 05:26:59 by eandre-f         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "utils.h"

char	*sharp_x_test(int (*fn_print)(const char *format, ...))
{
	char	*len = alloc_len(40);
	int		i = 0;
	len[i++] = fn_print(" %#x ", 0); fn_print("\n");
	len[i++] = fn_print(" %#x ", -1); fn_print("\n");
	len[i++] = fn_print(" %#x ", 1); fn_print("\n");
	len[i++] = fn_print(" %#x ", 9); fn_print("\n");
	len[i++] = fn_print(" %#x ", 10); fn_print("\n");
	len[i++] = fn_print(" %#x ", 11); fn_print("\n");
	len[i++] = fn_print(" %#x ", 15); fn_print("\n");
	len[i++] = fn_print(" %#x ", 16); fn_print("\n");
	len[i++] = fn_print(" %#x ", 17); fn_print("\n");
	len[i++] = fn_print(" %#x ", 99); fn_print("\n");
	len[i++] = fn_print(" %#x ", 100); fn_print("\n");
	len[i++] = fn_print(" %#x ", 101); fn_print("\n");
	len[i++] = fn_print(" %#x ", -9); fn_print("\n");
	len[i++] = fn_print(" %#x ", -10); fn_print("\n");
	len[i++] = fn_print(" %#x ", -11); fn_print("\n");
	len[i++] = fn_print(" %#x ", -14); fn_print("\n");
	len[i++] = fn_print(" %#x ", -15); fn_print("\n");
	len[i++] = fn_print(" %#x ", -16); fn_print("\n");
	len[i++] = fn_print(" %#x ", -99); fn_print("\n");
	len[i++] = fn_print(" %#x ", -100); fn_print("\n");
	len[i++] = fn_print(" %#x ", -101); fn_print("\n");
	len[i++] = fn_print(" %#x ", INT_MAX); fn_print("\n");
	len[i++] = fn_print(" %#x ", INT_MIN); fn_print("\n");
	len[i++] = fn_print(" %#x ", LONG_MAX); fn_print("\n");
	len[i++] = fn_print(" %#x ", LONG_MIN); fn_print("\n");
	len[i++] = fn_print(" %#x ", UINT_MAX); fn_print("\n");
	len[i++] = fn_print(" %#x ", ULONG_MAX); fn_print("\n");
	len[i++] = fn_print(" %#x ", 9223372036854775807LL); fn_print("\n");
	len[i++] = fn_print(" %#x %#x %#x %#x %#x %#x %#x", INT_MAX, INT_MIN, LONG_MAX, LONG_MIN, ULONG_MAX, 0, -42); fn_print("\n");
	len[i++] = fn_print(" %#x%#x ", INT_MAX, INT_MIN); fn_print("\n");
	return (len);
}

char	*sharp_upperx_test(int (*fn_print)(const char *format, ...))
{
	char	*len = alloc_len(40);
	int		i = 0;
	len[i++] = fn_print(" %#X ", 0); fn_print("\n");
	len[i++] = fn_print(" %#X ", -1); fn_print("\n");
	len[i++] = fn_print(" %#X ", 1); fn_print("\n");
	len[i++] = fn_print(" %#X ", 9); fn_print("\n");
	len[i++] = fn_print(" %#X ", 10); fn_print("\n");
	len[i++] = fn_print(" %#X ", 11); fn_print("\n");
	len[i++] = fn_print(" %#X ", 15); fn_print("\n");
	len[i++] = fn_print(" %#X ", 16); fn_print("\n");
	len[i++] = fn_print(" %#X ", 17); fn_print("\n");
	len[i++] = fn_print(" %#X ", 99); fn_print("\n");
	len[i++] = fn_print(" %#X ", 100); fn_print("\n");
	len[i++] = fn_print(" %#X ", 101); fn_print("\n");
	len[i++] = fn_print(" %#X ", -9); fn_print("\n");
	len[i++] = fn_print(" %#X ", -10); fn_print("\n");
	len[i++] = fn_print(" %#X ", -11); fn_print("\n");
	len[i++] = fn_print(" %#X ", -14); fn_print("\n");
	len[i++] = fn_print(" %#X ", -15); fn_print("\n");
	len[i++] = fn_print(" %#X ", -16); fn_print("\n");
	len[i++] = fn_print(" %#X ", -99); fn_print("\n");
	len[i++] = fn_print(" %#X ", -100); fn_print("\n");
	len[i++] = fn_print(" %#X ", -101); fn_print("\n");
	len[i++] = fn_print(" %#X ", INT_MAX); fn_print("\n");
	len[i++] = fn_print(" %#X ", INT_MIN); fn_print("\n");
	len[i++] = fn_print(" %#X ", LONG_MAX); fn_print("\n");
	len[i++] = fn_print(" %#X ", LONG_MIN); fn_print("\n");
	len[i++] = fn_print(" %#X ", UINT_MAX); fn_print("\n");
	len[i++] = fn_print(" %#X ", ULONG_MAX); fn_print("\n");
	len[i++] = fn_print(" %#X ", 9223372036854775807LL); fn_print("\n");
	len[i++] = fn_print(" %#X %#X %#X %#X %#X %#X %#X", INT_MAX, INT_MIN, LONG_MAX, LONG_MIN, ULONG_MAX, 0, -42); fn_print("\n");
	return (len);
}