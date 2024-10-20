/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_puthex.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zserobia <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/10 14:53:14 by zserobia          #+#    #+#             */
/*   Updated: 2024/05/11 11:31:08 by zserobia         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_puthex(unsigned int n, char *base)
{
	int	len;

	len = 0;
	if (n > 15)
		len += ft_puthex (n / 16, base);
	len += ft_putchar(base[n % 16]);
	return (len);
}
