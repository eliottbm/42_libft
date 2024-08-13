/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ebengtss <ebengtss@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/21 11:43:40 by ebengtss          #+#    #+#             */
/*   Updated: 2024/08/13 15:03:35 by ebengtss         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../incs/libft.h"

void	*ft_memmove(void *dest, const void *src, size_t n)
{
	size_t	i;
	char	*strdest;
	char	*strsrc;

	if (!dest && !src)
		return (NULL);
	strdest = (char *)dest;
	strsrc = (char *)src;
	i = 0;
	while (i < n)
	{
		if (dest <= src)
			strdest[i] = strsrc[i];
		else if (dest > src)
			strdest[(n - 1) - i] = strsrc[(n - 1) - i];
		i++;
	}
	return (dest);
}
