/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   nbr_test.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eandre-f <eandre-f@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/14 02:58:13 by eandre-f          #+#    #+#             */
/*   Updated: 2022/05/14 05:24:42 by eandre-f         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "utils.h"

char	*nbr_all_test(int (*fn_print)(const char *format, ...))
{
	char	*len = alloc_len(7);
	int		i = 0;
	len[i++] = fn_print(" %10s", "0123456790"); fn_print("\n");
	len[i++] = fn_print(" %10s", "012345"); fn_print("\n");
	len[i++] = fn_print(" %4d", 200); fn_print("\n");
	len[i++] = fn_print(" %2d", 200); fn_print("\n");
	len[i++] = fn_print(" %4i", 200); fn_print("\n");
	len[i++] = fn_print(" %2i", 200); fn_print("\n");
	return (len);
}