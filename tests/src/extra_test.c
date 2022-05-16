/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   extra_test.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eandre-f <eandre-f@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/16 07:22:23 by eandre-f          #+#    #+#             */
/*   Updated: 2022/05/16 07:24:55 by eandre-f         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "utils.h"

char	*extra_test(int (*fn_print)(const char *format, ...))
{
	char	*len = alloc_len(5);
	int		i = 0;
	len[i++] = fn_print(" %.*i %*i \n", 3, 11, 3, 11); fn_print("\n");
	len[i++] = fn_print(" %#05o \n", 100); fn_print("\n");
	return (len);
}
