/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printstring.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aeberius <aeberius@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/08 17:51:52 by aeberius          #+#    #+#             */
/*   Updated: 2024/06/08 20:19:42 by aeberius         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

void	ft_printstring(va_list args, int *final_return)
{
	int		i;
	char	*s;

	i = 0;
	s = va_arg(args, char*);
	while (s[i] != '\0')
	{
		write (1, &s[i], 1);
		i++;
	}
	*final_return = *final_return + i;
}
