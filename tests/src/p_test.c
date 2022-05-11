/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   p_test.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eandre-f <eandre-f@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/08 21:40:32 by eandre-f          #+#    #+#             */
/*   Updated: 2022/05/11 02:29:31 by eandre-f         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "utils.h"

char *test = "teste";

void	p_test(int (*fn_printf)(const char *format, ...))
{
	fn_printf("pointer %p\n", &test);
}
