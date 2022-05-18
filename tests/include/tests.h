/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   tests.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eandre-f <eandre-f@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/06 17:08:22 by eandre-f          #+#    #+#             */
/*   Updated: 2022/05/18 21:57:50 by eandre-f         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef TESTS_H
# define TESTS_H

//mandatory -----
char	*pure_test(int (*fn_printf)(const char *format, ...));
char	*c_test(int (*fn_printf)(const char *format, ...));
char	*s_test(int (*fn_printf)(const char *format, ...));
char	*p_test(int (*fn_printf)(const char *format, ...));
char	*d_test(int (*fn_printf)(const char *format, ...));
char	*i_test(int (*fn_printf)(const char *format, ...));
char	*u_test(int (*fn_printf)(const char *format, ...));
char	*x_test(int (*fn_printf)(const char *format, ...));
char	*upperx_test(int (*fn_printf)(const char *format, ...));
char	*pct_test(int (*fn_printf)(const char *format, ...));
char	*mix_test(int (*fn_printf)(const char *format, ...));

char	*nbr_all_test(int (*fn_print)(const char *format, ...));

// bonus -----
// minus
char	*minus_c_test(int (*fn_print)(const char *format, ...));
char	*minus_s_test(int (*fn_print)(const char *format, ...));
char	*minus_p_test(int (*fn_print)(const char *format, ...));
char	*minus_d_test(int (*fn_print)(const char *format, ...));
char	*minus_i_test(int (*fn_print)(const char *format, ...));
char	*minus_u_test(int (*fn_print)(const char *format, ...));
char	*minus_x_test(int (*fn_print)(const char *format, ...));
char	*minus_upperx_test(int (*fn_print)(const char *format, ...));
// zero
char	*zero_d_test(int (*fn_print)(const char *format, ...));
char	*zero_i_test(int (*fn_print)(const char *format, ...));
char	*zero_u_test(int (*fn_print)(const char *format, ...));
char	*zero_x_test(int (*fn_print)(const char *format, ...));
char	*zero_upperx_test(int (*fn_print)(const char *format, ...));
// .
char	*dot_s_test(int (*fn_print)(const char *format, ...));
char	*dot_d_test(int (*fn_print)(const char *format, ...));
char	*dot_i_test(int (*fn_print)(const char *format, ...));
char	*dot_u_test(int (*fn_print)(const char *format, ...));
char	*dot_x_test(int (*fn_print)(const char *format, ...));
char	*dot_upperx_test(int (*fn_print)(const char *format, ...));
// #
char	*sharp_x_test(int (*fn_print)(const char *format, ...));
char	*sharp_upperx_test(int (*fn_print)(const char *format, ...));
// ' '
char	*space_s_test(int (*fn_print)(const char *format, ...));
char	*space_d_test(int (*fn_print)(const char *format, ...));
char	*space_i_test(int (*fn_print)(const char *format, ...));
// +
char	*plus_d_test(int (*fn_print)(const char *format, ...));
char	*plus_i_test(int (*fn_print)(const char *format, ...));
// submix
char	*submix_test(int (*fn_print)(const char *format, ...));
// extra
char	*extra_test(int (*fn_print)(const char *format, ...));

#endif