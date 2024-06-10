/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aeberius <aeberius@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/30 20:41:43 by aeberius          #+#    #+#             */
/*   Updated: 2024/06/10 16:18:37 by aeberius         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_H
# define FT_PRINTF_H
# include <unistd.h>
# include <stdarg.h>

int		ft_printf(const char *format, ...);
void	ft_putchar(char c, int *final_return);
void	ft_printchar(va_list args, int *final_return);
void	ft_printdigits(va_list args, int *final_return);
void	ft_printstring(va_list args, int *final_return);
void	ft_printpointer(va_list args, int *final_return);
void	ft_printunsigned(va_list args, int *final_return);
void	ft_printhex(va_list args, char format, int *final_return);

#endif
