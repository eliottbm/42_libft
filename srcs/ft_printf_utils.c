/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf_utils1.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ebengtss <ebengtss@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/13 15:10:44 by ebengtss          #+#    #+#             */
/*   Updated: 2024/08/13 15:12:45 by ebengtss         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../incs/libft.h"

void	ft_putchar_len(char c, int *counter)
{
	write(1, &c, 1);
	*counter += 1;
}

void	ft_putstr_len(char *s, int *counter)
{
	int	i;

	if (!s)
	{
		write (1, "(null)", 6);
		*counter += 6;
		return ;
	}
	i = 0;
	while (s[i])
	{
		ft_putchar_len(s[i], counter);
		i++;
	}
}

void	ft_putnbr_len(int n, int *counter)
{
	long	nb;
	char	c;

	nb = (long)n;
	if (nb < 0)
	{
		nb *= -1;
		ft_putchar_len('-', counter);
	}
	if (nb > 9)
	{
		ft_putnbr_len((int)(nb / 10), counter);
		ft_putnbr_len((int)(nb % 10), counter);
	}
	else
	{
		c = nb + '0';
		ft_putchar_len(c, counter);
	}
}

void	ft_putuns_len(unsigned int n, int *counter)
{
	char	c;

	if (n > 9)
	{
		ft_putuns_len((n / 10), counter);
		ft_putuns_len((n % 10), counter);
	}
	else
	{
		c = n + '0';
		ft_putchar_len(c, counter);
	}
}

void	ft_puthex_len(unsigned int nb, int uplow, int *counter)
{
	char	*base;

	if (uplow == 0)
		base = "0123456789abcdef";
	if (uplow == 1)
		base = "0123456789ABCDEF";
	if (nb >= 16)
	{
		ft_puthex_len((nb / 16), uplow, counter);
		ft_puthex_len((nb % 16), uplow, counter);
	}
	else
		ft_putchar_len(base[nb], counter);
}
