/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   tests.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eandre-f <eandre-f@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/06 17:08:22 by eandre-f          #+#    #+#             */
/*   Updated: 2022/05/11 02:44:55 by eandre-f         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef TESTS_H
# define TESTS_H

void	pure_test(int (*fn_printf)(const char *format, ...));
void	c_test(int (*fn_printf)(const char *format, ...));
void	s_test(int (*fn_printf)(const char *format, ...));
void	p_test(int (*fn_printf)(const char *format, ...));
void	d_test(int (*fn_printf)(const char *format, ...));
void	i_test(int (*fn_printf)(const char *format, ...));
void	x_test(int (*fn_printf)(const char *format, ...));
void	pct_test(int (*fn_printf)(const char *format, ...));

#endif