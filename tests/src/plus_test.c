/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   plus_test.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eandre-f <eandre-f@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/14 06:02:10 by eandre-f          #+#    #+#             */
/*   Updated: 2022/05/16 01:22:18 by eandre-f         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "utils.h"

char	*plus_d_test(int (*fn_print)(const char *format, ...))
{
	char	*len = alloc_len(30);
	int		i = 0;
	len[i++] = fn_print(" %+d ", 0); fn_print("\n");
	len[i++] = fn_print(" %+d ", -1); fn_print("\n");
	len[i++] = fn_print(" %+d ", 9); fn_print("\n");
	len[i++] = fn_print(" %+d ", 10); fn_print("\n");
	len[i++] = fn_print(" %+d ", 11); fn_print("\n");
	len[i++] = fn_print(" %+d ", 15); fn_print("\n");
	len[i++] = fn_print(" %+d ", 16); fn_print("\n");
	len[i++] = fn_print(" %+d ", 17); fn_print("\n");
	len[i++] = fn_print(" %+d ", 99); fn_print("\n");
	len[i++] = fn_print(" %+d ", 100); fn_print("\n");
	len[i++] = fn_print(" %+d ", 101); fn_print("\n");
	len[i++] = fn_print(" %+d ", -9); fn_print("\n");
	len[i++] = fn_print(" %+d ", -10); fn_print("\n");
	len[i++] = fn_print(" %+d ", -11); fn_print("\n");
	len[i++] = fn_print(" %+d ", -14); fn_print("\n");
	len[i++] = fn_print(" %+d ", -15); fn_print("\n");
	len[i++] = fn_print(" %+d ", -16); fn_print("\n");
	len[i++] = fn_print(" %+d ", -99); fn_print("\n");
	len[i++] = fn_print(" %+d ", -100); fn_print("\n");
	len[i++] = fn_print(" %+d ", -101); fn_print("\n");
	len[i++] = fn_print(" %+d ", INT_MAX); fn_print("\n");
	len[i++] = fn_print(" %+d ", INT_MIN); fn_print("\n");
	len[i++] = fn_print(" %+d ", LONG_MAX); fn_print("\n");
	len[i++] = fn_print(" %+d ", LONG_MIN); fn_print("\n");
	len[i++] = fn_print(" %+d ", UINT_MAX); fn_print("\n");
	len[i++] = fn_print(" %+d ", ULONG_MAX); fn_print("\n");
	len[i++] = fn_print(" %+d ", 9223372036854775807LL); fn_print("\n");
	len[i++] = fn_print(" %+d %+d %+d %+d %+d %+d %+d", INT_MAX, INT_MIN, LONG_MAX, LONG_MIN, ULONG_MAX, 0, -42); fn_print("\n");
	len[i++] = fn_print("%+++d", 2147483647); fn_print("\n");
	return (len);
}

char	*plus_i_test(int (*fn_print)(const char *format, ...))
{
	char	*len = alloc_len(30);
	int		i = 0;
	len[i++] = fn_print(" %+i ", 0); fn_print("\n");
	len[i++] = fn_print(" %+i ", -1); fn_print("\n");
	len[i++] = fn_print(" %+i ", 1); fn_print("\n");
	len[i++] = fn_print(" %+i ", 9); fn_print("\n");
	len[i++] = fn_print(" %+i ", 10); fn_print("\n");
	len[i++] = fn_print(" %+i ", 11); fn_print("\n");
	len[i++] = fn_print(" %+i ", 15); fn_print("\n");
	len[i++] = fn_print(" %+i ", 16); fn_print("\n");
	len[i++] = fn_print(" %+i ", 17); fn_print("\n");
	len[i++] = fn_print(" %+i ", 99); fn_print("\n");
	len[i++] = fn_print(" %+i ", 100); fn_print("\n");
	len[i++] = fn_print(" %+i ", 101); fn_print("\n");
	len[i++] = fn_print(" %+i ", -9); fn_print("\n");
	len[i++] = fn_print(" %+i ", -10); fn_print("\n");
	len[i++] = fn_print(" %+i ", -11); fn_print("\n");
	len[i++] = fn_print(" %+i ", -14); fn_print("\n");
	len[i++] = fn_print(" %+i ", -15); fn_print("\n");
	len[i++] = fn_print(" %+i ", -16); fn_print("\n");
	len[i++] = fn_print(" %+i ", -99); fn_print("\n");
	len[i++] = fn_print(" %+i ", -100); fn_print("\n");
	len[i++] = fn_print(" %+i ", -101); fn_print("\n");
	len[i++] = fn_print(" %+i ", INT_MAX); fn_print("\n");
	len[i++] = fn_print(" %+i ", INT_MIN); fn_print("\n");
	len[i++] = fn_print(" %+i ", LONG_MAX); fn_print("\n");
	len[i++] = fn_print(" %+i ", LONG_MIN); fn_print("\n");
	len[i++] = fn_print(" %+i ", UINT_MAX); fn_print("\n");
	len[i++] = fn_print(" %+i ", ULONG_MAX); fn_print("\n");
	len[i++] = fn_print(" %+i ", 9223372036854775807LL); fn_print("\n");
	len[i++] = fn_print(" %+i %+i %+i %+i %+i %+i %+i", INT_MAX, INT_MIN, LONG_MAX, LONG_MIN, ULONG_MAX, 0, -42); fn_print("\n");
	return (len);
}
