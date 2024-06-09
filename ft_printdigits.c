/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printdigits.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aeberius <aeberius@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/08 19:48:59 by aeberius          #+#    #+#             */
/*   Updated: 2024/06/09 12:08:38 by aeberius         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"
static void	ft_putnbr(int nb, int *final_return);

void	ft_printdigits(va_list args, int *final_return)
{
	int	d;

	d = va_arg(args, int);
	ft_putnbr(d, final_return);
}
void	ft_putchar(char c, int *final_return)
{
	write (1, &c, 1);
	*final_return = *final_return + 1;
}

static void	ft_putnbr(int d, int *final_return)
{
	if (d == -2147483648)
	{
		write (1, "-2147483648", 11);
		*final_return = *final_return + 11;
		return ;
	}
	if (d < 0)
	{
		d = d * -1;
		ft_putchar ('-', final_return);
	}
	if (d >= 10)
		ft_putnbr(d / 10, final_return);
	ft_putchar(d % 10 + '0', final_return);
}
