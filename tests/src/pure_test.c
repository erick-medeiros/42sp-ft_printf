/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   pure_test.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eandre-f <eandre-f@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/08 01:02:03 by eandre-f          #+#    #+#             */
/*   Updated: 2022/05/14 03:01:59 by eandre-f         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "utils.h"

char	*pure_test(int (*fn_print)(const char *format, ...))
{
	char	*len = alloc_len(2);
	len[0] = fn_print("pure\n");
	return (len);
}
