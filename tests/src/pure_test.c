/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   pure_test.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eandre-f <eandre-f@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/08 01:02:03 by eandre-f          #+#    #+#             */
/*   Updated: 2022/05/12 16:44:18 by eandre-f         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "utils.h"

char	*pure_test(int (*fn_print)(const char *format, ...))
{
	char	*len;

	len = (char *)calloc(sizeof(char), 100);
	len[0] = fn_print("pure\n");
	return (len);
}
