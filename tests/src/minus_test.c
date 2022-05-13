/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   minus_test.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eandre-f <eandre-f@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/12 23:05:28 by eandre-f          #+#    #+#             */
/*   Updated: 2022/05/13 23:23:49 by eandre-f         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "utils.h"

char	*minus_c_test(int (*fn_print)(const char *format, ...))
{
	char	*len = alloc_len(11);
	len[1] = fn_print("%-1c", '0'); fn_print("\n");
	len[2] = fn_print(" %-2c ", '0'); fn_print("\n");
	len[3] = fn_print(" %-3c", '0' - 256); fn_print("\n");
	len[4] = fn_print("%-4c ", '0' + 256); fn_print("\n");
	len[5] = fn_print(" %-1c %-2c %-3c ", '0', 0, '1'); fn_print("\n");
	len[6] = fn_print(" %-1c %-2c %-3c ", ' ', ' ', ' '); fn_print("\n");
	len[7] = fn_print(" %-1c %-2c %-3c ", '1', '2', '3'); fn_print("\n");
	len[8] = fn_print(" %-1c %-2c %-3c ", '2', '1', 0); fn_print("\n");
	len[9] = fn_print(" %-1c %-2c %-3c ", 0, '1', '2'); fn_print("\n");
	return (len);
}

char	*minus_s_test(int (*fn_print)(const char *format, ...))
{
	char	*len = alloc_len(11);
	len[0] = fn_print("%1s", ""); fn_print("\n");
	len[1] = fn_print("%-1s", ""); fn_print("\n");
	len[2] = fn_print(" %-2s", ""); fn_print("\n");
	len[3] = fn_print("%-3s ", ""); fn_print("\n");
	len[4] = fn_print(" %-0s ", ""); fn_print("\n");
	len[5] = fn_print("(-s) (%-s) ", "-"); fn_print("\n");
	len[6] = fn_print(" %-1s %-2s ", "", "-"); fn_print("\n");
	len[7] = fn_print(" %-3s %-4s ", " - ", ""); fn_print("\n");
	len[8] = fn_print(" %-2s %-3s %-4s %-5s ", " - ", "", "4", ""); fn_print("\n");
	len[9] = fn_print(" %-3s %-3s %-4s %-5s %-3s ", " - ", "", "4", "", "2 "); fn_print("\n");
	return (len);
}

char	*minus_p_test(int (*fn_print)(const char *format, ...))
{
	char	*len = alloc_len(11);
	len[0] = fn_print(" %2p ", -1); fn_print("\n");
	len[1] = fn_print(" %-2p ", -1); fn_print("\n");
	len[2] = fn_print(" %-2p ", 1); fn_print("\n");
	len[3] = fn_print(" %-2p ", 15); fn_print("\n");
	len[4] = fn_print(" %-3p ", 16); fn_print("\n");
	len[5] = fn_print(" %-4p ", 17); fn_print("\n");
	len[6] = fn_print(" %-9p %-10p ", LONG_MIN, LONG_MAX); fn_print("\n");
	len[7] = fn_print(" %-11p %-12p ", INT_MIN, INT_MAX); fn_print("\n");
	len[8] = fn_print(" %-13p %-14p ", ULONG_MAX, -ULONG_MAX); fn_print("\n");
	len[9] = fn_print(" %-1p %-2p ", 0, 0); fn_print("\n");
	return (len);
}

char	*minus_d_test(int (*fn_print)(const char *format, ...))
{
	char	*len = alloc_len(30);
	len[0] = fn_print(" %-1d ", 0); fn_print("\n");
	len[1] = fn_print(" %-2d ", -1); fn_print("\n");
	len[2] = fn_print(" %-3d ", 1); fn_print("\n");
	len[3] = fn_print(" %-4d ", 9); fn_print("\n");
	len[4] = fn_print(" %-1d ", 10); fn_print("\n");
	len[5] = fn_print(" %-2d ", 11); fn_print("\n");
	len[6] = fn_print(" %-3d ", 15); fn_print("\n");
	len[7] = fn_print(" %-4d ", 16); fn_print("\n");
	len[8] = fn_print(" %-5d ", 17); fn_print("\n");
	len[9] = fn_print(" %-1d ", 99); fn_print("\n");
	len[10] = fn_print(" %-2d ", 100); fn_print("\n");
	len[11] = fn_print(" %-3d ", 101); fn_print("\n");
	len[12] = fn_print(" %-1d ", -9); fn_print("\n");
	len[13] = fn_print(" %-2d ", -10); fn_print("\n");
	len[14] = fn_print(" %-3d ", -11); fn_print("\n");
	len[15] = fn_print(" %-4d ", -14); fn_print("\n");
	len[16] = fn_print(" %-5d ", -15); fn_print("\n");
	len[17] = fn_print(" %-6d ", -16); fn_print("\n");
	len[18] = fn_print(" %-1d ", -99); fn_print("\n");
	len[19] = fn_print(" %-2d ", -100); fn_print("\n");
	len[20] = fn_print(" %-3d ", -101); fn_print("\n");
	len[21] = fn_print(" %-9d ", INT_MAX); fn_print("\n");
	len[22] = fn_print(" %-10d ", INT_MIN); fn_print("\n");
	len[23] = fn_print(" %-11d ", LONG_MAX); fn_print("\n");
	len[24] = fn_print(" %-12d ", LONG_MIN); fn_print("\n");
	len[25] = fn_print(" %-13d ", UINT_MAX); fn_print("\n");
	len[26] = fn_print(" %-14d ", ULONG_MAX); fn_print("\n");
	len[27] = fn_print(" %-15d ", 9223372036854775807LL); fn_print("\n");
	len[28] = fn_print(" %-9d %-10d %-11d %-12d %-13d %-14d %-15d", INT_MAX, INT_MIN, LONG_MAX, LONG_MIN, ULONG_MAX, 0, -42); fn_print("\n");
	return (len);
}

char	*minus_i_test(int (*fn_print)(const char *format, ...))
{
	char	*len = alloc_len(30);
	len[0] = fn_print(" %-1i ", 0); fn_print("\n");
	len[1] = fn_print(" %-2i ", -1); fn_print("\n");
	len[2] = fn_print(" %-3i ", 1); fn_print("\n");
	len[3] = fn_print(" %-4i ", 9); fn_print("\n");
	len[4] = fn_print(" %-1i ", 10); fn_print("\n");
	len[5] = fn_print(" %-2i ", 11); fn_print("\n");
	len[6] = fn_print(" %-3i ", 15); fn_print("\n");
	len[7] = fn_print(" %-4i ", 16); fn_print("\n");
	len[8] = fn_print(" %-5i ", 17); fn_print("\n");
	len[9] = fn_print(" %-1i ", 99); fn_print("\n");
	len[10] = fn_print(" %-2i ", 100); fn_print("\n");
	len[11] = fn_print(" %-3i ", 101); fn_print("\n");
	len[12] = fn_print(" %-1i ", -9); fn_print("\n");
	len[13] = fn_print(" %-2i ", -10); fn_print("\n");
	len[14] = fn_print(" %-3i ", -11); fn_print("\n");
	len[15] = fn_print(" %-4i ", -14); fn_print("\n");
	len[16] = fn_print(" %-5i ", -15); fn_print("\n");
	len[17] = fn_print(" %-6i ", -16); fn_print("\n");
	len[18] = fn_print(" %-1i ", -99); fn_print("\n");
	len[19] = fn_print(" %-2i ", -100); fn_print("\n");
	len[20] = fn_print(" %-3i ", -101); fn_print("\n");
	len[21] = fn_print(" %-9i ", INT_MAX); fn_print("\n");
	len[22] = fn_print(" %-10i ", INT_MIN); fn_print("\n");
	len[23] = fn_print(" %-11i ", LONG_MAX); fn_print("\n");
	len[24] = fn_print(" %-12i ", LONG_MIN); fn_print("\n");
	len[25] = fn_print(" %-13i ", UINT_MAX); fn_print("\n");
	len[26] = fn_print(" %-14i ", ULONG_MAX); fn_print("\n");
	len[27] = fn_print(" %-15i ", 9223372036854775807LL); fn_print("\n");
	len[28] = fn_print(" %-9i %-10i %-11i %-12i %-13i %-14i %-15i", INT_MAX, INT_MIN, LONG_MAX, LONG_MIN, ULONG_MAX, 0, -42); fn_print("\n");
	return (len);
}

char	*minus_u_test(int (*fn_print)(const char *format, ...))
{
	char	*len = alloc_len(30);
	len[0] = fn_print(" %-1u ", 0); fn_print("\n");
	len[1] = fn_print(" %-2u ", -1); fn_print("\n");
	len[2] = fn_print(" %-3u ", 1); fn_print("\n");
	len[3] = fn_print(" %-4u ", 9); fn_print("\n");
	len[4] = fn_print(" %-1u ", 10); fn_print("\n");
	len[5] = fn_print(" %-2u ", 11); fn_print("\n");
	len[6] = fn_print(" %-3u ", 15); fn_print("\n");
	len[7] = fn_print(" %-4u ", 16); fn_print("\n");
	len[7] = fn_print(" %-5u ", 17); fn_print("\n");
	len[8] = fn_print(" %-1u ", 99); fn_print("\n");
	len[10] = fn_print(" %-2u ", 100); fn_print("\n");
	len[11] = fn_print(" %-3u ", 101); fn_print("\n");
	len[12] = fn_print(" %-1u ", -9); fn_print("\n");
	len[13] = fn_print(" %-2u ", -10); fn_print("\n");
	len[14] = fn_print(" %-3u ", -11); fn_print("\n");
	len[15] = fn_print(" %-4u ", -14); fn_print("\n");
	len[16] = fn_print(" %-5u ", -15); fn_print("\n");
	len[17] = fn_print(" %-6u ", -16); fn_print("\n");
	len[18] = fn_print(" %-1u ", -99); fn_print("\n");
	len[19] = fn_print(" %-2u ", -100); fn_print("\n");
	len[20] = fn_print(" %-3u ", -101); fn_print("\n");
	len[21] = fn_print(" %-9u ", INT_MAX); fn_print("\n");
	len[22] = fn_print(" %-10u ", INT_MIN); fn_print("\n");
	len[23] = fn_print(" %-11u ", LONG_MAX); fn_print("\n");
	len[24] = fn_print(" %-12u ", LONG_MIN); fn_print("\n");
	len[25] = fn_print(" %-13u ", UINT_MAX); fn_print("\n");
	len[26] = fn_print(" %-14u ", ULONG_MAX); fn_print("\n");
	len[27] = fn_print(" %-15u ", 9223372036854775807LL); fn_print("\n");
	len[28] = fn_print(" %-9u %-10u %-11u %-12u %-13u %-14u %-15u", INT_MAX, INT_MIN, LONG_MAX, LONG_MIN, ULONG_MAX, 0, -42); fn_print("\n");
	return (len);
}

char	*minus_x_test(int (*fn_print)(const char *format, ...))
{
	char	*len = alloc_len(30);
	len[0] = fn_print(" %-1x ", 0); fn_print("\n");
	len[1] = fn_print(" %-2x ", -1); fn_print("\n");
	len[2] = fn_print(" %-3x ", 1); fn_print("\n");
	len[3] = fn_print(" %-4x ", 9); fn_print("\n");
	len[4] = fn_print(" %-1x ", 10); fn_print("\n");
	len[5] = fn_print(" %-2x ", 11); fn_print("\n");
	len[6] = fn_print(" %-3x ", 15); fn_print("\n");
	len[7] = fn_print(" %-4x ", 16); fn_print("\n");
	len[8] = fn_print(" %-5x ", 17); fn_print("\n");
	len[9] = fn_print(" %-1x ", 99); fn_print("\n");
	len[10] = fn_print(" %-2x ", 100); fn_print("\n");
	len[11] = fn_print(" %-3x ", 101); fn_print("\n");
	len[12] = fn_print(" %-1x ", -9); fn_print("\n");
	len[13] = fn_print(" %-2x ", -10); fn_print("\n");
	len[14] = fn_print(" %-3x ", -11); fn_print("\n");
	len[15] = fn_print(" %-4x ", -14); fn_print("\n");
	len[16] = fn_print(" %-5x ", -15); fn_print("\n");
	len[17] = fn_print(" %-6x ", -16); fn_print("\n");
	len[18] = fn_print(" %-1x ", -99); fn_print("\n");
	len[19] = fn_print(" %-2x ", -100); fn_print("\n");
	len[20] = fn_print(" %-3x ", -101); fn_print("\n");
	len[21] = fn_print(" %-9x ", INT_MAX); fn_print("\n");
	len[22] = fn_print(" %-10x ", INT_MIN); fn_print("\n");
	len[23] = fn_print(" %-11x ", LONG_MAX); fn_print("\n");
	len[24] = fn_print(" %-12x ", LONG_MIN); fn_print("\n");
	len[25] = fn_print(" %-13x ", UINT_MAX); fn_print("\n");
	len[26] = fn_print(" %-14x ", ULONG_MAX); fn_print("\n");
	len[27] = fn_print(" %-15x ", 9223372036854775807LL); fn_print("\n");
	len[28] = fn_print(" %-9x %-10x %-11x %-12x %-13x %-14x %-15x", INT_MAX, INT_MIN, LONG_MAX, LONG_MIN, ULONG_MAX, 0, -42); fn_print("\n");
	return (len);
}

char	*minus_upperx_test(int (*fn_print)(const char *format, ...))
{
	char	*len = alloc_len(30);
	len[0] = fn_print(" %-1X ", 0); fn_print("\n");
	len[1] = fn_print(" %-2X ", -1); fn_print("\n");
	len[2] = fn_print(" %-3X ", 1); fn_print("\n");
	len[3] = fn_print(" %-4X ", 9); fn_print("\n");
	len[4] = fn_print(" %-1X ", 10); fn_print("\n");
	len[5] = fn_print(" %-2X ", 11); fn_print("\n");
	len[6] = fn_print(" %-3X ", 15); fn_print("\n");
	len[7] = fn_print(" %-4X ", 16); fn_print("\n");
	len[8] = fn_print(" %-5X ", 17); fn_print("\n");
	len[9] = fn_print(" %-1X ", 99); fn_print("\n");
	len[10] = fn_print(" %-2X ", 100); fn_print("\n");
	len[11] = fn_print(" %-3X ", 101); fn_print("\n");
	len[12] = fn_print(" %-1X ", -9); fn_print("\n");
	len[13] = fn_print(" %-2X ", -10); fn_print("\n");
	len[14] = fn_print(" %-3X ", -11); fn_print("\n");
	len[15] = fn_print(" %-4X ", -14); fn_print("\n");
	len[16] = fn_print(" %-5X ", -15); fn_print("\n");
	len[17] = fn_print(" %-6X ", -16); fn_print("\n");
	len[18] = fn_print(" %-1X ", -99); fn_print("\n");
	len[19] = fn_print(" %-2X ", -100); fn_print("\n");
	len[20] = fn_print(" %-3X ", -101); fn_print("\n");
	len[21] = fn_print(" %-9X ", INT_MAX); fn_print("\n");
	len[22] = fn_print(" %-10X ", INT_MIN); fn_print("\n");
	len[23] = fn_print(" %-11X ", LONG_MAX); fn_print("\n");
	len[24] = fn_print(" %-12X ", LONG_MIN); fn_print("\n");
	len[25] = fn_print(" %-13X ", UINT_MAX); fn_print("\n");
	len[26] = fn_print(" %-14X ", ULONG_MAX); fn_print("\n");
	len[27] = fn_print(" %-15X ", 9223372036854775807LL); fn_print("\n");
	len[28] = fn_print(" %-9X %-10X %-11X %-12X %-13X %-14X %-15X", INT_MAX, INT_MIN, LONG_MAX, LONG_MIN, ULONG_MAX, 0, -42); fn_print("\n");
	return (len);
}
