/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aeberius <aeberius@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/30 20:40:42 by aeberius          #+#    #+#             */
/*   Updated: 2024/06/08 21:00:50 by aeberius         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_printf(const char *format, ...)
{
	va_list args;
	int	final_return;

	final_return = 0;
	va_start(args, format);

	while (*format != '\0')
	{
		if (*format == '%')
		{
			format++;
			if (*format == 'c')
				ft_printchar(args, &final_return);
			if (*format == 's')
				ft_printstring (args, &final_return);
/* 			if (*format == 'p')
				ft_xxx (args, &final_return); */
			if (*format == 'd' || *format == 'i')
				ft_printdigits (args, &final_return);
			if (*format == 'u');
		}
		else
		{
			write (1, format, 1);
			final_return ++;
		}
		format++;
	}
	va_end(args);
	return(final_return);
}
/*  #include <stdio.h>
int main ()
{
	int a;
	int b;

	a=ft_printf("Gregorio %d\n", -2147483648);
	b=printf("Gregorio %d\n", -2147483648);

	printf("Original = %d \n", b);
	printf("Meu = %d \n", a);
} */
