/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   extra_test.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eandre-f <eandre-f@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/16 07:22:23 by eandre-f          #+#    #+#             */
/*   Updated: 2022/05/18 01:03:08 by eandre-f         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "utils.h"

char	c = 'v';

char	*extra_test(int (*fn_print)(const char *format, ...))
{
	char	*len = alloc_len(6);
	int		i = 0;
	len[i++] = fn_print(" %.*i %*i", 3, 11, 3, 11); fn_print("\n");
	len[i++] = fn_print(" %#05o", 100); fn_print("\n");
	len[i++] = fn_print("%05i %05s", -1, "-1", &c, &c); fn_print("\n");
	len[i++] = fn_print("(%05p)", -1, "-1", &c, &c); fn_print("\n");
	len[i++] = fn_print("(%020p) (%20p)", -1, "-1", &c, &c); fn_print("\n");
	return (len);
}
