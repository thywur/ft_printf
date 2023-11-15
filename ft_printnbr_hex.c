/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printnbr_hex.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alermolo <alermolo@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/12 18:11:14 by alermolo          #+#    #+#             */
/*   Updated: 2023/11/15 10:46:17 by alermolo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_printnbr_hex(unsigned int nbr)
{
	char	*base;
	int		printed;

	printed = 0;
	base = "0123456789abcdef";
	if (nbr == 0)
		return (ft_printchar(base[0]));
	if (nbr / 16 > 0)
		printed += ft_printnbr_hex(nbr / 16);
	printed += ft_printchar(base[nbr % 16]);
	return (printed);
}

int	ft_printnbr_hex_caps(unsigned int nbr)
{
	char	*base;
	int		printed;

	printed = 0;
	base = "0123456789ABCDEF";
	if (nbr == 0)
		return (ft_printchar(base[0]));
	if (nbr / 16 > 0)
		printed += ft_printnbr_hex_caps(nbr / 16);
	printed += ft_printchar(base[nbr % 16]);
	return (printed);
}
