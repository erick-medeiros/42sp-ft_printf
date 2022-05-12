/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   tests.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eandre-f <eandre-f@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/06 17:08:22 by eandre-f          #+#    #+#             */
/*   Updated: 2022/05/12 14:34:09 by eandre-f         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef TESTS_H
# define TESTS_H

# ifndef RUN_BONUS
#  define RUN_BONUS 0
# endif

void	pure_test(int (*fn_printf)(const char *format, ...));
void	c_test(int (*fn_printf)(const char *format, ...));
void	s_test(int (*fn_printf)(const char *format, ...));
void	p_test(int (*fn_printf)(const char *format, ...));
void	d_test(int (*fn_printf)(const char *format, ...));
void	i_test(int (*fn_printf)(const char *format, ...));
void	u_test(int (*fn_printf)(const char *format, ...));
void	x_test(int (*fn_printf)(const char *format, ...));
void	pct_test(int (*fn_printf)(const char *format, ...));

#endif