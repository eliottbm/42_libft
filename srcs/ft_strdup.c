/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ebengtss <ebengtss@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/22 15:20:22 by ebengtss          #+#    #+#             */
/*   Updated: 2024/08/13 16:50:31 by ebengtss         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../incs/libft.h"

char	*ft_strdup(char const *src)
{
	size_t	srclen;
	char	*dst;

	srclen = ft_strlen(src);
	dst = malloc(sizeof(char) * (srclen + 1));
	if (!dst)
		return (NULL);
	ft_strlcpy(dst, src, srclen);
	return (dst);
}
