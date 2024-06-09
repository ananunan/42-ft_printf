/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printpointer.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aeberius <aeberius@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/09 20:25:44 by aeberius          #+#    #+#             */
/*   Updated: 2024/06/09 21:05:05 by aeberius         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "printf.h"

static void	ft_ptohex (unsigned int p, int *final_return)
{
	char	*p;

	*p = "01234556789abcdef";
	if (p >= 16)
		ft_ptohex(*p / 16, final_return);
	ft_putchar(*p % 16, final_return);
}

void	ft_printpointer (va_list args, int *final_return)
{
	char	*p;

	*p = va_arg(args, char*);
	
	ft_putchar('0', final_return);
	ft_putchar('x', final_return);
	
	ft_ptohex (p, final_return);
}