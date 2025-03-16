/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_puthex.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aylamiri <aylamiri@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/24 19:31:14 by aylamiri          #+#    #+#             */
/*   Updated: 2024/11/25 23:07:59 by aylamiri         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_puthex(unsigned long nb, char c)
{
	int		len;

	len = 0;
	if (nb > 15)
	{
		len += ft_puthex(nb / 16, c);
		if (len == -1)
			return (-1);
	}
	if (c == 'x')
	{
		len += write(1, &"0123456789abcdef"[nb % 16], 1);
		if (len == -1)
			return (-1);
	}
	else
	{
		len += write(1, &"0123456789ABCDEF"[nb % 16], 1);
		if (len == -1)
			return (-1);
	}
	return (len);
}
