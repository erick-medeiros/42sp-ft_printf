/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eandre-f <eandre-f@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/06 17:07:50 by eandre-f          #+#    #+#             */
/*   Updated: 2022/05/06 17:11:02 by eandre-f         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libftprintf.h"
#include "tests.h"
#include "utils.h"

// stdout_cp = copy of default "stdout"

int	main(void)
{
	int	stdout_cp;

	stdout_cp = dup(1);
	c_test(stdout_cp);
	close(stdout_cp);
	return (0);
}
