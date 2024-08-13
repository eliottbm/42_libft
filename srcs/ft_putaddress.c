/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putaddress.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ebengtss <ebengtss@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/17 10:49:50 by ebengtss          #+#    #+#             */
/*   Updated: 2024/08/13 15:06:57 by ebengtss         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../incs/libft.h"

static void	ft_putaddress(unsigned long long int nb, int *counter)
{
	const char	*base = "0123456789abcdef";

	if (nb >= 16)
	{
		ft_putaddress((nb / 16), counter);
		ft_putaddress((nb % 16), counter);
	}
	else
		ft_putchar_len(base[nb], counter);
}

void	ft_getaddress(void *ptr, int *counter)
{
	uintptr_t	address;

	if (!ptr)
	{
		ft_putstr_len("(nil)", counter);
		return ;
	}
	address = (unsigned long long int)ptr;
	ft_putstr_len("0x", counter);
	ft_putaddress(address, counter);
}
