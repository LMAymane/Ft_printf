/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aylamiri <aylamiri@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/24 22:22:48 by aylamiri          #+#    #+#             */
/*   Updated: 2024/11/27 18:12:55 by aylamiri         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

static void	check(va_list argp, const char *format, int *len)
{
	if (*format == '%')
		*len += ft_putchar('%');
	else if (*format == 'c')
		*len += ft_putchar((char)va_arg(argp, int));
	else if (*format == 's')
		*len += ft_putstr(va_arg(argp, char *));
	else if (*format == 'p')
		*len += ft_putaddr(va_arg(argp, unsigned long));
	else if (*format == 'd')
		*len += ft_putnbr(va_arg(argp, int));
	else if (*format == 'i')
		*len += ft_putnbr(va_arg(argp, int));
	else if (*format == 'u')
		*len += ft_putunbr(va_arg(argp, unsigned int));
	else if (*format == 'x')
		*len += ft_puthex(va_arg(argp, unsigned int), *format);
	else if (*format == 'X')
		*len += ft_puthex(va_arg(argp, unsigned int), *format);
	else
		*len += ft_putchar(*format);
}

int	ft_printf(const char *format, ...)
{
	int		len;
	va_list	argp;

	len = 0;
	va_start(argp, format);
	while (*format != '\0')
	{
		if (*format == '%' && *(format + 1) == '\0')
			break ;
		if (*format == '%')
		{
			format++;
			check(argp, format, &len);
		}
		else
			len += ft_putchar(*format);
		if (len == -1)
			return (-1);
		format++;
	}
	if (len == -1)
		return (-1);
	va_end(argp);
	return (len);
}
