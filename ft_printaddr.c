/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printaddr.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alermolo <alermolo@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/14 18:26:47 by alermolo          #+#    #+#             */
/*   Updated: 2023/11/14 18:34:34 by alermolo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libftprintf.h"

int	ft_printaddr(unsigned long addr)
{
	char	buffer[17];
	char	*base;
	int		i;
	int		printed;

	i = 0;
	base = "0123456789abcdef";
	while (addr > 0)
	{
		buffer[i] = base[(unsigned char)addr % 16];
		addr /= 16;
		i++;
	}
	if (i < 16 && i + 1 < 16)
	{
		buffer[i] = 'x';
		buffer[i + 1] = '0';
		i += 2;
	}
	i--;
	printed = 0;
	while (i + 1 > 0)
		printed += ft_printchar(buffer[i--]);
	return (printed);
}
