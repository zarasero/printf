/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zserobia <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/10 12:11:02 by zserobia          #+#    #+#             */
/*   Updated: 2024/05/13 13:07:39 by zserobia         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	check(va_list args, char n)
{
	if (n == 'c')
		return (ft_putchar((char)va_arg(args, int)));
	else if (n == 's')
		return (ft_putstr(va_arg(args, char *)));
	else if (n == 'p')
		return (ft_putptr(va_arg(args, uintptr_t *)));
	else if (n == 'd' || n == 'i')
		return (ft_putnbar(va_arg(args, int)));
	else if (n == 'u')
		return (ft_putunsign(va_arg(args, unsigned int)));
	else if (n == 'x')
		return (ft_puthex(va_arg(args, unsigned int), "0123456789abcdef"));
	else if (n == 'X')
		return (ft_puthex(va_arg(args, unsigned int), "0123456789ABCDEF"));
	else if (n == '%')
		return (ft_putchar('%'));
	return (1);
}

int	ft_printf(const char *propos, ...)
{
	va_list	args;
	int		i;
	int		len;

	va_start(args, propos);
	i = 0;
	len = 0;
	while (propos[i])
	{
		if (propos[i] == '%')
		{
			len += check(args, propos[i + 1]);
			i += 2;
		}
		else
		{
			len += ft_putchar(propos[i]);
			i++;
		}
	}
	va_end(args);
	return (len);
}
/*int	main(void)
{
	char			*str;
	char			c;
	int 	x;
	void	 *ptr;

	c = 'a';
	str = "Unicorns dose not exists";
	x = 123;
	ptr = &x;
	ft_printf("%p\n", ptr);
	printf("%p\n", ptr);
	ft_printf("El caracter es %c\n", c);
	printf("El caracter es %c\n", c);
	ft_printf("String: %s\n", str);
	printf("String: %s\n", str);
	ft_printf("Puntero: %p\n", &x);
	printf("Puntero: %p\n", ptr);
	ft_printf("Int max: %d, Int min: %i\n", 0, -521);
	printf("Int max: %d, Int max: %i\n", 0, 521);
	ft_printf("Unsigned int: %u\n", -4294967295);
	printf("Unsigned int: %u\n", 429496729);
	ft_printf("Hexadecimal en minuscula: %x\n", 255);
	printf("Hexadecimal en minuscula:: %x\n", 255);
	ft_printf("Hexadecimal en minuscula: %X\n", 255);
}*/
