/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aeberius <aeberius@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/30 20:40:42 by aeberius          #+#    #+#             */
/*   Updated: 2024/05/30 21:43:57 by aeberius         ###   ########.fr       */
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
			;
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
#include <stdio.h>
int main ()
{
	int a;
	int b;
	
	
	a=ft_printf("Gregorio %c\n", 'a');
	b=printf("Gregorio %c\n", 'a');

	printf("original = %d \n", b);
	printf("meu = %d \n", a);

}