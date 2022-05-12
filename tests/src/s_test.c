/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   s_test.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eandre-f <eandre-f@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/08 16:15:25 by eandre-f          #+#    #+#             */
/*   Updated: 2022/05/12 02:38:16 by eandre-f         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "utils.h"

void	s_test(int (*fn_printf)(const char *format, ...))
{
	fn_printf("%s", "string"); fn_printf("\n");
	fn_printf(" %s %s %s ", "-", "4", "2"); fn_printf("\n");
	fn_printf(" NULL %s NULL ", NULL); fn_printf("\n");

	char *s2 = "Testando";
	fn_printf("%s", "teste"); fn_printf("\n");
	fn_printf(" %s", "oi"); fn_printf("\n");
	fn_printf("%s ", ""); fn_printf("\n");
	fn_printf(" %s ", ""); fn_printf("\n");
	fn_printf(" %s ", "-"); fn_printf("\n");
	fn_printf(" %s %s ", "", "-"); fn_printf("\n");
	fn_printf(" %s %s ", " - ", ""); fn_printf("\n");
	fn_printf(" %s %s %s %s %s", " - ", "", "4", "", s2); fn_printf("\n");
	fn_printf(" %s %s %s %s %s ", " - ", "", "4", "", "2 "); fn_printf("\n");
	fn_printf(" NULL %s NULL ", NULL); fn_printf("\n");
}
