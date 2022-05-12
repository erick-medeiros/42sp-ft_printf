/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   minus_test.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eandre-f <eandre-f@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/12 23:05:28 by eandre-f          #+#    #+#             */
/*   Updated: 2022/05/12 23:05:45 by eandre-f         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "utils.h"

char	*minus_c_test(int (*fn_print)(const char *format, ...))
{
	char	*len = alloc_len(10);

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