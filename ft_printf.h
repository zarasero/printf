/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zserobia <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/11 11:55:09 by zserobia          #+#    #+#             */
/*   Updated: 2024/05/11 12:54:15 by zserobia         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_H
# define FT_PRINTF_H

# include <stdarg.h>
# include <unistd.h>
# include <stdio.h>
# include <stdint.h>

int	ft_printf(const char *propos, ...);
int	ft_putstr(const char *str);
int	ft_putchar(char n);
int	ft_puthex(unsigned int n, char *base);
int	ft_putnbar(int n);
int	ft_putunsign(unsigned int n);
int	ft_putptr(uintptr_t *str);

#endif
