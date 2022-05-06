/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   c_test.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eandre-f <eandre-f@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/06 17:08:11 by eandre-f          #+#    #+#             */
/*   Updated: 2022/05/06 17:09:50 by eandre-f         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "tests.h"
#include "utils.h"

void	c_test(int stdout_cp)
{
	int	fd;

	printf("terminal 1\n");
	fd = open_printf_log();
	if (fd == -1)
		return ;
	printf("arquivo\n");
	stdout_default(stdout_cp, fd);
	printf("terminal 2\n");
}
