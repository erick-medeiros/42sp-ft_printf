/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   dot_test.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eandre-f <eandre-f@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/14 02:58:24 by eandre-f          #+#    #+#             */
/*   Updated: 2022/05/18 01:46:45 by eandre-f         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "utils.h"

char	*dot_s_test(int (*fn_print)(const char *format, ...))
{
	char	*len = alloc_len(15);
	len[0] = fn_print("%.1s", NULL); fn_print("\n");
	len[1] = fn_print("%.s", ""); fn_print("\n");
	len[2] = fn_print("( %.1s)", ""); fn_print("\n");
	len[3] = fn_print("%.1s ", ""); fn_print("\n");
	len[4] = fn_print(" %.s ", ""); fn_print("\n");
	len[5] = fn_print(" %.s ", "-"); fn_print("\n");
	len[6] = fn_print(" %.2s %.1s ", "", "-"); fn_print("\n");
	len[7] = fn_print(" %.3s %.2s ", " - ", ""); fn_print("\n");
	len[8] = fn_print(" %.1s %.2s %.3s %.4s ", " - ", "", "4", ""); fn_print("\n");
	len[9] = fn_print(" %.2s %.3s %.4s %.5s %.1s ", " - ", "", "4", "", "2 "); fn_print("\n");
	len[10] = fn_print("%.6s", NULL); fn_print("\n");
	len[11] = fn_print("(%1.s)", "21-school.ru"); fn_print("\n");
	len[12] = fn_print("(%10.1s)", "21-school.ru"); fn_print("\n");
	len[13] = fn_print(" %.5s ", (char *)NULL); fn_print("\n");
	return (len);
}

char	*dot_d_test(int (*fn_print)(const char *format, ...))
{
	char	*len = alloc_len(33);
	len[0] = fn_print(" %.1d ", 0); fn_print("\n");
	len[1] = fn_print(" %.2d ", -1); fn_print("\n");
	len[2] = fn_print(" %.2d ", 1); fn_print("\n");
	len[3] = fn_print(" %.1d ", 9); fn_print("\n");
	len[4] = fn_print(" %.2d ", 10); fn_print("\n");
	len[5] = fn_print(" %.3d ", 11); fn_print("\n");
	len[6] = fn_print(" %.4d ", 15); fn_print("\n");
	len[7] = fn_print(" %.5d ", 16); fn_print("\n");
	len[8] = fn_print(" %.6d ", 17); fn_print("\n");
	len[9] = fn_print(" %.1d ", 99); fn_print("\n");
	len[10] = fn_print(" %.2d ", 100); fn_print("\n");
	len[11] = fn_print(" %.3d ", 101); fn_print("\n");
	len[12] = fn_print(" %.1d ", -9); fn_print("\n");
	len[13] = fn_print(" %.2d ", -10); fn_print("\n");
	len[14] = fn_print(" %.3d ", -11); fn_print("\n");
	len[15] = fn_print(" %.4d ", -14); fn_print("\n");
	len[16] = fn_print(" %.1d ", -15); fn_print("\n");
	len[17] = fn_print(" %.2d ", -16); fn_print("\n");
	len[18] = fn_print(" %.3d ", -99); fn_print("\n");
	len[19] = fn_print(" %.3d ", -100); fn_print("\n");
	len[20] = fn_print(" %.4d ", -101); fn_print("\n");
	len[21] = fn_print(" %.8d ", INT_MAX); fn_print("\n");
	len[22] = fn_print(" %.9d ", INT_MIN); fn_print("\n");
	len[23] = fn_print(" %.10d ", LONG_MAX); fn_print("\n");
	len[24] = fn_print(" %.11d ", LONG_MIN); fn_print("\n");
	len[25] = fn_print(" %.12d ", UINT_MAX); fn_print("\n");
	len[26] = fn_print(" %.13d ", ULONG_MAX); fn_print("\n");
	len[27] = fn_print(" %.14d ", 9223372036854775807LL); fn_print("\n");
	len[28] = fn_print(" %.8d %.9d %.10d %.11d %.12d %.13d %.14d", INT_MAX, INT_MIN, LONG_MAX, LONG_MIN, ULONG_MAX, 0, -42); fn_print("\n");
	len[29] = fn_print("(%.0d)", 0); fn_print("\n");
	len[30] = fn_print("(%.0d)", 420000); fn_print("\n");
	return (len);
}

char	*dot_i_test(int (*fn_print)(const char *format, ...))
{
	char	*len = alloc_len(30);
	len[0] = fn_print(" %.1i ", 0); fn_print("\n");
	len[1] = fn_print(" %.2i ", -1); fn_print("\n");
	len[2] = fn_print(" %.2i ", 1); fn_print("\n");
	len[3] = fn_print(" %.1i ", 9); fn_print("\n");
	len[4] = fn_print(" %.2i ", 10); fn_print("\n");
	len[5] = fn_print(" %.3i ", 11); fn_print("\n");
	len[6] = fn_print(" %.4i ", 15); fn_print("\n");
	len[7] = fn_print(" %.5i ", 16); fn_print("\n");
	len[8] = fn_print(" %.6i ", 17); fn_print("\n");
	len[9] = fn_print(" %.1i ", 99); fn_print("\n");
	len[10] = fn_print(" %.2i ", 100); fn_print("\n");
	len[11] = fn_print(" %.3i ", 101); fn_print("\n");
	len[12] = fn_print(" %.1i ", -9); fn_print("\n");
	len[13] = fn_print(" %.2i ", -10); fn_print("\n");
	len[14] = fn_print(" %.3i ", -11); fn_print("\n");
	len[15] = fn_print(" %.4i ", -14); fn_print("\n");
	len[16] = fn_print(" %.1i ", -15); fn_print("\n");
	len[17] = fn_print(" %.2i ", -16); fn_print("\n");
	len[18] = fn_print(" %.3i ", -99); fn_print("\n");
	len[19] = fn_print(" %.3i ", -100); fn_print("\n");
	len[20] = fn_print(" %.4i ", -101); fn_print("\n");
	len[21] = fn_print(" %.8i ", INT_MAX); fn_print("\n");
	len[22] = fn_print(" %.9i ", INT_MIN); fn_print("\n");
	len[23] = fn_print(" %.10i ", LONG_MAX); fn_print("\n");
	len[24] = fn_print(" %.11i ", LONG_MIN); fn_print("\n");
	len[25] = fn_print(" %.12i ", UINT_MAX); fn_print("\n");
	len[26] = fn_print(" %.13i ", ULONG_MAX); fn_print("\n");
	len[27] = fn_print(" %.14i ", 9223372036854775807LL); fn_print("\n");
	len[28] = fn_print(" %.8i %.9i %.10i %.11i %.12i %.13i %.14i", INT_MAX, INT_MIN, LONG_MAX, LONG_MIN, ULONG_MAX, 0, -42); fn_print("\n");
	return (len);
}

char	*dot_u_test(int (*fn_print)(const char *format, ...))
{
	char	*len = alloc_len(30);
	len[0] = fn_print(" %.1u ", 0); fn_print("\n");
	len[1] = fn_print(" %.2u ", -1); fn_print("\n");
	len[2] = fn_print(" %.2u ", 1); fn_print("\n");
	len[3] = fn_print(" %.1u ", 9); fn_print("\n");
	len[4] = fn_print(" %.2u ", 10); fn_print("\n");
	len[5] = fn_print(" %.3u ", 11); fn_print("\n");
	len[6] = fn_print(" %.4u ", 15); fn_print("\n");
	len[7] = fn_print(" %.5u ", 16); fn_print("\n");
	len[8] = fn_print(" %.6u ", 17); fn_print("\n");
	len[9] = fn_print(" %.1u ", 99); fn_print("\n");
	len[10] = fn_print(" %.2u ", 100); fn_print("\n");
	len[11] = fn_print(" %.3u ", 101); fn_print("\n");
	len[12] = fn_print(" %.1u ", -9); fn_print("\n");
	len[13] = fn_print(" %.2u ", -10); fn_print("\n");
	len[14] = fn_print(" %.3u ", -11); fn_print("\n");
	len[15] = fn_print(" %.4u ", -14); fn_print("\n");
	len[16] = fn_print(" %.1u ", -15); fn_print("\n");
	len[17] = fn_print(" %.2u ", -16); fn_print("\n");
	len[18] = fn_print(" %.3u ", -99); fn_print("\n");
	len[19] = fn_print(" %.3u ", -100); fn_print("\n");
	len[20] = fn_print(" %.4u ", -101); fn_print("\n");
	len[21] = fn_print(" %.8u ", INT_MAX); fn_print("\n");
	len[22] = fn_print(" %.9u ", INT_MIN); fn_print("\n");
	len[23] = fn_print(" %.10u ", LONG_MAX); fn_print("\n");
	len[24] = fn_print(" %.11u ", LONG_MIN); fn_print("\n");
	len[25] = fn_print(" %.12u ", UINT_MAX); fn_print("\n");
	len[26] = fn_print(" %.13u ", ULONG_MAX); fn_print("\n");
	len[27] = fn_print(" %.14u ", 9223372036854775807LL); fn_print("\n");
	len[28] = fn_print(" %.8u %.9u %.10u %.11u %.12u %.13u %.14u", INT_MAX, INT_MIN, LONG_MAX, LONG_MIN, ULONG_MAX, 0, -42); fn_print("\n");
	return (len);
}

char	*dot_x_test(int (*fn_print)(const char *format, ...))
{
	char	*len = alloc_len(41);
	int		i = 0;
	len[i++] = fn_print(" %.1x ", 0); fn_print("\n");
	len[i++] = fn_print(" %.2x ", -1); fn_print("\n");
	len[i++] = fn_print(" %.2x ", 1); fn_print("\n");
	len[i++] = fn_print(" %.1x ", 9); fn_print("\n");
	len[i++] = fn_print(" %.2x ", 10); fn_print("\n");
	len[i++] = fn_print(" %.3x ", 11); fn_print("\n");
	len[i++] = fn_print(" %.4x ", 15); fn_print("\n");
	len[i++] = fn_print(" %.5x ", 16); fn_print("\n");
	len[i++] = fn_print(" %.6x ", 17); fn_print("\n");
	len[i++] = fn_print(" %.1x ", 99); fn_print("\n");
	len[i++] = fn_print(" %.2x ", 100); fn_print("\n");
	len[i++] = fn_print(" %.3x ", 101); fn_print("\n");
	len[i++] = fn_print(" %.1x ", -9); fn_print("\n");
	len[i++] = fn_print(" %.2x ", -10); fn_print("\n");
	len[i++] = fn_print(" %.3x ", -11); fn_print("\n");
	len[i++] = fn_print(" %.4x ", -14); fn_print("\n");
	len[i++] = fn_print(" %.1x ", -15); fn_print("\n");
	len[i++] = fn_print(" %.2x ", -16); fn_print("\n");
	len[i++] = fn_print(" %.3x ", -99); fn_print("\n");
	len[i++] = fn_print(" %.3x ", -100); fn_print("\n");
	len[i++] = fn_print(" %.4x ", -101); fn_print("\n");
	len[i++] = fn_print(" %.8x ", INT_MAX); fn_print("\n");
	len[i++] = fn_print(" %.9x ", INT_MIN); fn_print("\n");
	len[i++] = fn_print(" %.10x ", LONG_MAX); fn_print("\n");
	len[i++] = fn_print(" %.11x ", LONG_MIN); fn_print("\n");
	len[i++] = fn_print(" %.12x ", UINT_MAX); fn_print("\n");
	len[i++] = fn_print(" %.13x ", ULONG_MAX); fn_print("\n");
	len[i++] = fn_print(" %.14x ", 9223372036854775807LL); fn_print("\n");
	len[i++] = fn_print(" %.8x %.9x %.10x %.11x %.12x %.13x %.14x", INT_MAX, INT_MIN, LONG_MAX, LONG_MIN, ULONG_MAX, 0, -42); fn_print("\n");
	len[i++] = fn_print("%.0x", (unsigned int)-1); fn_print("\n");
	return (len);
}

char	*dot_upperx_test(int (*fn_print)(const char *format, ...))
{
	char	*len = alloc_len(40);
	int		i = 0;
	len[i++] = fn_print(" %.1X ", 0); fn_print("\n");
	len[i++] = fn_print(" %.2X ", -1); fn_print("\n");
	len[i++] = fn_print(" %.2X ", 1); fn_print("\n");
	len[i++] = fn_print(" %.1X ", 9); fn_print("\n");
	len[i++] = fn_print(" %.2X ", 10); fn_print("\n");
	len[i++] = fn_print(" %.3X ", 11); fn_print("\n");
	len[i++] = fn_print(" %.4X ", 15); fn_print("\n");
	len[i++] = fn_print(" %.5X ", 16); fn_print("\n");
	len[i++] = fn_print(" %.6X ", 17); fn_print("\n");
	len[i++] = fn_print(" %.1X ", 99); fn_print("\n");
	len[i++] = fn_print(" %.2X ", 100); fn_print("\n");
	len[i++] = fn_print(" %.3X ", 101); fn_print("\n");
	len[i++] = fn_print(" %.1X ", -9); fn_print("\n");
	len[i++] = fn_print(" %.2X ", -10); fn_print("\n");
	len[i++] = fn_print(" %.3X ", -11); fn_print("\n");
	len[i++] = fn_print(" %.4X ", -14); fn_print("\n");
	len[i++] = fn_print(" %.1X ", -15); fn_print("\n");
	len[i++] = fn_print(" %.2X ", -16); fn_print("\n");
	len[i++] = fn_print(" %.3X ", -99); fn_print("\n");
	len[i++] = fn_print(" %.3X ", -100); fn_print("\n");
	len[i++] = fn_print(" %.4X ", -101); fn_print("\n");
	len[i++] = fn_print(" %.8X ", INT_MAX); fn_print("\n");
	len[i++] = fn_print(" %.9X ", INT_MIN); fn_print("\n");
	len[i++] = fn_print(" %.10X ", LONG_MAX); fn_print("\n");
	len[i++] = fn_print(" %.11X ", LONG_MIN); fn_print("\n");
	len[i++] = fn_print(" %.12X ", UINT_MAX); fn_print("\n");
	len[i++] = fn_print(" %.13X ", ULONG_MAX); fn_print("\n");
	len[i++] = fn_print(" %.14X ", 9223372036854775807LL); fn_print("\n");
	len[i++] = fn_print(" %.8X %.9X %.10X %.11X %.12X %.13X %.14X", INT_MAX, INT_MIN, LONG_MAX, LONG_MIN, ULONG_MAX, 0, -42); fn_print("\n");
	return (len);
}
