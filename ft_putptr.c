/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putptr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zserobia <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/11 11:45:12 by zserobia          #+#    #+#             */
/*   Updated: 2024/05/11 12:46:42 by zserobia         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_ptrprint(uintptr_t str, char *base)
{
	int	len;

	len = 0;
	if (base == NULL)
		return (0);
	if (str >= 16)
		len += ft_ptrprint((uintptr_t)(str / 16), base);
	len += ft_putchar(base[str % 16]);
	return (len);
}

int	ft_putptr(uintptr_t *str)
{
	uintptr_t	num;
	int			leng;

	num = (uintptr_t)str;
	leng = 0;
	if (num == 0)
		return (ft_putstr("(nil)"));
	else
	{
		leng += write(1, "0x", 2);
		leng += ft_ptrprint(num, "0123456789abcdef");
	}
	return (leng);
}
