/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aylamiri <aylamiri@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/24 15:09:37 by aylamiri          #+#    #+#             */
/*   Updated: 2024/11/27 17:48:54 by aylamiri         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_putnbr(int n)
{
	unsigned int	nb;
	int				check;
	int				len;

	len = 0;
	nb = n;
	if (n < 0)
	{
		check = ft_putchar('-');
		if (check == -1)
			return (-1);
		len += check;
		nb *= -1;
	}
	if (nb > 9)
	{
		check = ft_putnbr(nb / 10);
		if (check == -1)
			return (-1);
		len += check;
	}
	check = ft_putchar((nb % 10) + '0');
	if (check == -1)
		return (-1);
	return (len += check);
}
