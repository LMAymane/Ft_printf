/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putunbr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aylamiri <aylamiri@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/24 17:33:21 by aylamiri          #+#    #+#             */
/*   Updated: 2024/11/25 23:04:48 by aylamiri         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_putunbr(unsigned int n)
{
	int	len;

	len = 0;
	if (n > 9)
	{
		len += ft_putunbr(n / 10);
		if (len == -1)
			return (-1);
	}
	len += ft_putchar((n % 10) + '0');
	if (len == -1)
		return (-1);
	return (len);
}
