/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gisidro- <gisidro-@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/02 18:39:28 by gisidro-          #+#    #+#             */
/*   Updated: 2025/05/19 16:34:01 by gisidro-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_H
# define FT_PRINTF_H

# include <unistd.h>
# include <stdarg.h>

int	ft_printf(const char *format, ...);
int	ft_p_char(int c);
int	ft_p_string(char *str);
int	ft_p_pointer(void *ptr);
int	ft_p_integer(int num);
int	ft_p_unsigned(unsigned int num);
int	ft_p_hexadecimal(unsigned int num, const char c);
#endif