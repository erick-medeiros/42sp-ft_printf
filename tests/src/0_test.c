/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   0_test.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eandre-f <eandre-f@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/13 23:50:37 by eandre-f          #+#    #+#             */
/*   Updated: 2022/05/14 00:03:14 by eandre-f         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "utils.h"

char	*zero_d_test(int (*fn_print)(const char *format, ...))
{
		char	*len = alloc_len(30);
		len[1] = fn_print(" %01d ", 0); fn_print("\n");
		len[2] = fn_print(" %02d ", -1); fn_print("\n");
		len[3] = fn_print(" %04d ", 9); fn_print("\n");
		len[4] = fn_print(" %01d ", 10); fn_print("\n");
		len[5] = fn_print(" %02d ", 11); fn_print("\n");
		len[6] = fn_print(" %03d ", 15); fn_print("\n");
		len[7] = fn_print(" %04d ", 16); fn_print("\n");
		len[8] = fn_print(" %05d ", 17); fn_print("\n");
		len[9] = fn_print(" %01d ", 99); fn_print("\n");
		len[10] = fn_print(" %02d ", 100); fn_print("\n");
		len[11] = fn_print(" %03d ", 101); fn_print("\n");
		len[12] = fn_print(" %01d ", -9); fn_print("\n");
		len[13] = fn_print(" %02d ", -10); fn_print("\n");
		len[14] = fn_print(" %03d ", -11); fn_print("\n");
		len[15] = fn_print(" %04d ", -14); fn_print("\n");
		len[16] = fn_print(" %05d ", -15); fn_print("\n");
		len[17] = fn_print(" %06d ", -16); fn_print("\n");
		len[18] = fn_print(" %01d ", -99); fn_print("\n");
		len[19] = fn_print(" %02d ", -100); fn_print("\n");
		len[20] = fn_print(" %03d ", -101); fn_print("\n");
		len[21] = fn_print(" %09d ", INT_MAX); fn_print("\n");
		len[22] = fn_print(" %010d ", INT_MIN); fn_print("\n");
		len[23] = fn_print(" %011d ", LONG_MAX); fn_print("\n");
		len[24] = fn_print(" %012d ", LONG_MIN); fn_print("\n");
		len[25] = fn_print(" %013d ", UINT_MAX); fn_print("\n");
		len[26] = fn_print(" %014d ", ULONG_MAX); fn_print("\n");
		len[27] = fn_print(" %015d ", 9223372036854775807LL); fn_print("\n");
		len[28] = fn_print(" %09d %010d %011d %012d %013d %014d %015d", INT_MAX, INT_MIN, LONG_MAX, LONG_MIN, ULONG_MAX, 0, -42); fn_print("\n");
		return (len);
}

char	*zero_i_test(int (*fn_print)(const char *format, ...))
{
	char	*len = alloc_len(30);
	len[0] = fn_print(" %01i ", 0); fn_print("\n");
	len[1] = fn_print(" %02i ", -1); fn_print("\n");
	len[2] = fn_print(" %03i ", 1); fn_print("\n");
	len[3] = fn_print(" %04i ", 9); fn_print("\n");
	len[4] = fn_print(" %01i ", 10); fn_print("\n");
	len[5] = fn_print(" %02i ", 11); fn_print("\n");
	len[6] = fn_print(" %03i ", 15); fn_print("\n");
	len[7] = fn_print(" %04i ", 16); fn_print("\n");
	len[8] = fn_print(" %05i ", 17); fn_print("\n");
	len[8] = fn_print(" %01i ", 99); fn_print("\n");
	len[9] = fn_print(" %02i ", 100); fn_print("\n");
	len[10] = fn_print(" %03i ", 101); fn_print("\n");
	len[11] = fn_print(" %01i ", -9); fn_print("\n");
	len[12] = fn_print(" %02i ", -10); fn_print("\n");
	len[13] = fn_print(" %03i ", -11); fn_print("\n");
	len[14] = fn_print(" %04i ", -14); fn_print("\n");
	len[15] = fn_print(" %05i ", -15); fn_print("\n");
	len[16] = fn_print(" %06i ", -16); fn_print("\n");
	len[17] = fn_print(" %01i ", -99); fn_print("\n");
	len[18] = fn_print(" %02i ", -100); fn_print("\n");
	len[19] = fn_print(" %03i ", -101); fn_print("\n");
	len[20] = fn_print(" %09i ", INT_MAX); fn_print("\n");
	len[21] = fn_print(" %010i ", INT_MIN); fn_print("\n");
	len[22] = fn_print(" %011i ", LONG_MAX); fn_print("\n");
	len[23] = fn_print(" %012i ", LONG_MIN); fn_print("\n");
	len[24] = fn_print(" %013i ", UINT_MAX); fn_print("\n");
	len[25] = fn_print(" %014i ", ULONG_MAX); fn_print("\n");
	len[26] = fn_print(" %015i ", 9223372036854775807LL); fn_print("\n");
	len[27] = fn_print(" %09i %010i %011i %012i %013i %014i %015i", INT_MAX, INT_MIN, LONG_MAX, LONG_MIN, ULONG_MAX, 0, -42); fn_print("\n");
	return (len);
}

char	*zero_u_test(int (*fn_print)(const char *format, ...))
{
	char	*len = alloc_len(30);
	len[0] = fn_print(" %01u ", 0); fn_print("\n");
	len[1] = fn_print(" %02u ", -1); fn_print("\n");
	len[2] = fn_print(" %03u ", 1); fn_print("\n");
	len[3] = fn_print(" %04u ", 9); fn_print("\n");
	len[4] = fn_print(" %01u ", 10); fn_print("\n");
	len[5] = fn_print(" %02u ", 11); fn_print("\n");
	len[6] = fn_print(" %03u ", 15); fn_print("\n");
	len[7] = fn_print(" %04u ", 16); fn_print("\n");
	len[8] = fn_print(" %05u ", 17); fn_print("\n");
	len[8] = fn_print(" %01u ", 99); fn_print("\n");
	len[9] = fn_print(" %02u ", 100); fn_print("\n");
	len[10] = fn_print(" %03u ", 101); fn_print("\n");
	len[11] = fn_print(" %01u ", -9); fn_print("\n");
	len[12] = fn_print(" %02u ", -10); fn_print("\n");
	len[13] = fn_print(" %03u ", -11); fn_print("\n");
	len[14] = fn_print(" %04u ", -14); fn_print("\n");
	len[15] = fn_print(" %05u ", -15); fn_print("\n");
	len[16] = fn_print(" %06u ", -16); fn_print("\n");
	len[17] = fn_print(" %01u ", -99); fn_print("\n");
	len[18] = fn_print(" %02u ", -100); fn_print("\n");
	len[19] = fn_print(" %03u ", -101); fn_print("\n");
	len[20] = fn_print(" %09u ", INT_MAX); fn_print("\n");
	len[21] = fn_print(" %010u ", INT_MIN); fn_print("\n");
	len[22] = fn_print(" %011u ", LONG_MAX); fn_print("\n");
	len[23] = fn_print(" %012u ", LONG_MIN); fn_print("\n");
	len[24] = fn_print(" %013u ", UINT_MAX); fn_print("\n");
	len[25] = fn_print(" %014u ", ULONG_MAX); fn_print("\n");
	len[26] = fn_print(" %015u ", 9223372036854775807LL); fn_print("\n");
	len[27] = fn_print(" %09u %010u %011u %012u %013u %014u %015u", INT_MAX, INT_MIN, LONG_MAX, LONG_MIN, ULONG_MAX, 0, -42); fn_print("\n");
	return (len);
}

char	*zero_x_test(int (*fn_print)(const char *format, ...))
{
	char	*len = alloc_len(30);
	len[0] = fn_print(" %01x ", 0); fn_print("\n");
	len[1] = fn_print(" %02x ", -1); fn_print("\n");
	len[2] = fn_print(" %03x ", 1); fn_print("\n");
	len[3] = fn_print(" %04x ", 9); fn_print("\n");
	len[4] = fn_print(" %01x ", 10); fn_print("\n");
	len[5] = fn_print(" %02x ", 11); fn_print("\n");
	len[6] = fn_print(" %03x ", 15); fn_print("\n");
	len[7] = fn_print(" %04x ", 16); fn_print("\n");
	len[8] = fn_print(" %05x ", 17); fn_print("\n");
	len[8] = fn_print(" %01x ", 99); fn_print("\n");
	len[9] = fn_print(" %02x ", 100); fn_print("\n");
	len[10] = fn_print(" %03x ", 101); fn_print("\n");
	len[11] = fn_print(" %01x ", -9); fn_print("\n");
	len[12] = fn_print(" %02x ", -10); fn_print("\n");
	len[13] = fn_print(" %03x ", -11); fn_print("\n");
	len[14] = fn_print(" %04x ", -14); fn_print("\n");
	len[15] = fn_print(" %05x ", -15); fn_print("\n");
	len[16] = fn_print(" %06x ", -16); fn_print("\n");
	len[17] = fn_print(" %01x ", -99); fn_print("\n");
	len[18] = fn_print(" %02x ", -100); fn_print("\n");
	len[19] = fn_print(" %03x ", -101); fn_print("\n");
	len[20] = fn_print(" %09x ", INT_MAX); fn_print("\n");
	len[21] = fn_print(" %010x ", INT_MIN); fn_print("\n");
	len[22] = fn_print(" %011x ", LONG_MAX); fn_print("\n");
	len[23] = fn_print(" %012x ", LONG_MIN); fn_print("\n");
	len[24] = fn_print(" %013x ", UINT_MAX); fn_print("\n");
	len[25] = fn_print(" %014x ", ULONG_MAX); fn_print("\n");
	len[26] = fn_print(" %015x ", 9223372036854775807LL); fn_print("\n");
	len[27] = fn_print(" %09x %010x %011x %012x %013x %014x %015x", INT_MAX, INT_MIN, LONG_MAX, LONG_MIN, ULONG_MAX, 0, -42); fn_print("\n");
	return (len);
}

char	*zero_upperx_test(int (*fn_print)(const char *format, ...))
{
	char	*len = alloc_len(30);
	len[0] = fn_print(" %01X ", 0); fn_print("\n");
	len[1] = fn_print(" %02X ", -1); fn_print("\n");
	len[2] = fn_print(" %03X ", 1); fn_print("\n");
	len[3] = fn_print(" %04X ", 9); fn_print("\n");
	len[4] = fn_print(" %01X ", 10); fn_print("\n");
	len[5] = fn_print(" %02X ", 11); fn_print("\n");
	len[6] = fn_print(" %03X ", 15); fn_print("\n");
	len[7] = fn_print(" %04X ", 16); fn_print("\n");
	len[8] = fn_print(" %05X ", 17); fn_print("\n");
	len[8] = fn_print(" %01X ", 99); fn_print("\n");
	len[9] = fn_print(" %02X ", 100); fn_print("\n");
	len[10] = fn_print(" %03X ", 101); fn_print("\n");
	len[11] = fn_print(" %01X ", -9); fn_print("\n");
	len[12] = fn_print(" %02X ", -10); fn_print("\n");
	len[13] = fn_print(" %03X ", -11); fn_print("\n");
	len[14] = fn_print(" %04X ", -14); fn_print("\n");
	len[15] = fn_print(" %05X ", -15); fn_print("\n");
	len[16] = fn_print(" %06X ", -16); fn_print("\n");
	len[17] = fn_print(" %01X ", -99); fn_print("\n");
	len[18] = fn_print(" %02X ", -100); fn_print("\n");
	len[19] = fn_print(" %03X ", -101); fn_print("\n");
	len[20] = fn_print(" %09X ", INT_MAX); fn_print("\n");
	len[21] = fn_print(" %010X ", INT_MIN); fn_print("\n");
	len[22] = fn_print(" %011X ", LONG_MAX); fn_print("\n");
	len[23] = fn_print(" %012X ", LONG_MIN); fn_print("\n");
	len[24] = fn_print(" %013X ", UINT_MAX); fn_print("\n");
	len[25] = fn_print(" %014X ", ULONG_MAX); fn_print("\n");
	len[26] = fn_print(" %015X ", 9223372036854775807LL); fn_print("\n");
	len[27] = fn_print(" %09X %010X %011X %012X %013X %014X %015X", INT_MAX, INT_MIN, LONG_MAX, LONG_MIN, ULONG_MAX, 0, -42); fn_print("\n");
	return (len);
}
