/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putaddr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aylamiri <aylamiri@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/24 21:50:35 by aylamiri          #+#    #+#             */
/*   Updated: 2024/11/25 22:36:14 by aylamiri         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_putaddr(unsigned long address)
{
	int	len;

	len = 0;
	len += ft_putstr("0x");
	if (len == -1)
		return (-1);
	len += ft_puthex(address, 'x');
	return (len);
}
