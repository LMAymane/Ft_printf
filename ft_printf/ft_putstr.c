/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aylamiri <aylamiri@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/24 15:02:41 by aylamiri          #+#    #+#             */
/*   Updated: 2024/11/26 16:12:37 by aylamiri         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_putstr(char *str)
{
	int	len;
	int	check;

	len = 0;
	if (!str)
		return (write(1, "(null)", 6));
	while (str[len])
	{
		check = 0;
		check = ft_putchar(str[len]);
		if (check == -1)
			return (-1);
		len++;
	}
	return (len);
}
