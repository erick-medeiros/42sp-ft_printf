/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   i_test.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eandre-f <eandre-f@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/08 21:34:09 by eandre-f          #+#    #+#             */
/*   Updated: 2022/05/08 21:35:31 by eandre-f         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "utils.h"

void	i_test(int (*fn_printf)(const char *format, ...))
{
	fn_printf("pure %i\n", 42);
}