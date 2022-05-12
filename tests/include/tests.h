/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   tests.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eandre-f <eandre-f@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/06 17:08:22 by eandre-f          #+#    #+#             */
/*   Updated: 2022/05/12 16:41:31 by eandre-f         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef TESTS_H
# define TESTS_H

# ifndef RUN_BONUS
#  define RUN_BONUS 0
# endif

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

#endif