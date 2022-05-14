/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   s_test.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eandre-f <eandre-f@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/08 16:15:25 by eandre-f          #+#    #+#             */
/*   Updated: 2022/05/14 03:02:22 by eandre-f         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "utils.h"

char	*s_test(int (*fn_print)(const char *format, ...))
{
	char	*len = alloc_len(14);
	len[0] = fn_print("%s", "string"); fn_print("\n");
	len[1] = fn_print(" %s %s %s ", "-", "4", "2"); fn_print("\n");
	len[2] = fn_print(" NULL %s NULL ", NULL); fn_print("\n");
	char *s2 = "Testando";
	len[3] = fn_print("%s", "teste"); fn_print("\n");
	len[4] = fn_print(" %s", "oi"); fn_print("\n");
	len[5] = fn_print("%s ", ""); fn_print("\n");
	len[6] = fn_print(" %s ", ""); fn_print("\n");
	len[7] = fn_print(" %s ", "-"); fn_print("\n");
	len[8] = fn_print(" %s %s ", "", "-"); fn_print("\n");
	len[9] = fn_print(" %s %s ", " - ", ""); fn_print("\n");
	len[10] = fn_print(" %s %s %s %s %s", " - ", "", "4", "", s2); fn_print("\n");
	len[11] = fn_print(" %s %s %s %s %s ", " - ", "", "4", "", "2 "); fn_print("\n");
	len[12] = fn_print(" NULL %s NULL ", NULL); fn_print("\n");
	return (len);
}
