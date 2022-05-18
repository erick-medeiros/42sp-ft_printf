/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   submix_test.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eandre-f <eandre-f@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/16 05:10:14 by eandre-f          #+#    #+#             */
/*   Updated: 2022/05/18 03:10:55 by eandre-f         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "utils.h"

char	*submix_test(int (*fn_print)(const char *format, ...))
{
	char	*len = alloc_len(5);
	int		i = 0;
	len[i++] = fn_print("(%0c)\n", 'a'); fn_print("\n");
	len[i++] = fn_print("(%01.d)\n", 0); fn_print("\n");
	len[i++] = fn_print("(%01.x)\n", 0); fn_print("\n");
	len[i++] = fn_print(" (% 2d) (%2d) (% d) ", 0, 0, 0); fn_print("\n");
	len[i++] = fn_print(" %+.2d ", 0); fn_print("\n");
	len[i++] = fn_print(" %#.2x ", 1); fn_print("\n");
	return (len);
}
