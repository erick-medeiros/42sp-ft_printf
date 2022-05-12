/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   c_test.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eandre-f <eandre-f@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/06 17:08:11 by eandre-f          #+#    #+#             */
/*   Updated: 2022/05/12 23:59:05 by eandre-f         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "utils.h"

char	*c_test(int (*fn_print)(const char *format, ...))
{
	char	*len = alloc_len(11);
	len[0] = fn_print("character %c", 'a'); fn_print("\n");
	len[1] = fn_print("%c", '0'); fn_print("\n");
	len[2] = fn_print(" %c ", '0'); fn_print("\n");
	len[3] = fn_print(" %c", '0' - 256); fn_print("\n");
	len[4] = fn_print("%c ", '0' + 256); fn_print("\n");
	len[5] = fn_print(" %c %c %c ", '0', 0, '1'); fn_print("\n");
	len[6] = fn_print(" %c %c %c ", ' ', ' ', ' '); fn_print("\n");
	len[7] = fn_print(" %c %c %c ", '1', '2', '3'); fn_print("\n");
	len[8] = fn_print(" %c %c %c ", '2', '1', 0); fn_print("\n");
	len[9] = fn_print(" %c %c %c ", 0, '1', '2'); fn_print("\n");
	return (len);
}
