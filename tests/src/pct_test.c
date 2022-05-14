/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   pct_test.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eandre-f <eandre-f@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/08 16:22:32 by eandre-f          #+#    #+#             */
/*   Updated: 2022/05/14 03:01:52 by eandre-f         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "utils.h"

char	*pct_test(int (*fn_print)(const char *format, ...))
{
	char	*len = alloc_len(9);
	len[0] = fn_print("%%\n");
	len[1] = fn_print(" %% "); fn_print("\n");
	len[2] = fn_print(" %%%% "); fn_print("\n");
	len[3] = fn_print(" %% %% %% "); fn_print("\n");
	len[4] = fn_print(" %%  %%  %% "); fn_print("\n");
	len[5] = fn_print(" %%   %%   %% "); fn_print("\n");
	len[6] = fn_print("%%"); fn_print("\n");
	len[7] = fn_print("%% %%"); fn_print("\n");
	return (len);
}
