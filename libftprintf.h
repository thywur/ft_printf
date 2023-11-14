/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libftprintf.h                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alermolo <alermolo@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/14 16:10:36 by alermolo          #+#    #+#             */
/*   Updated: 2023/11/14 18:28:29 by alermolo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef LIBFTPRINTF_H
# define LIBFTPRINTF_H

# include <unistd.h>
# include <stdarg.h>

int	ft_printf(const char *s, ...);
int	ft_printchar(char c);
int	ft_printstr(char *str);
int	ft_printaddr(unsigned long addr);
int	ft_printnbr(int n);
int	ft_printnbr_unsigned(unsigned int n);
int	ft_printnbr_hex(unsigned int nbr);
int	ft_printnbr_hex_caps(unsigned int nbr);

#endif
