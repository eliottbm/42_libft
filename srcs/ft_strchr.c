/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ebengtss <ebengtss@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/22 10:19:26 by ebengtss          #+#    #+#             */
/*   Updated: 2024/08/13 15:19:38 by ebengtss         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../incs/libft.h"

char	*ft_strchr(const char *s, int c)
{
	size_t	i;
	char	*str;
	char	cchar;

	str = (char *)s;
	cchar = (char)c;
	i = 0;
	if (cchar == '\0')
		return (&(str[ft_strlen(s)]));
	while (s[i])
	{
		if (s[i] == cchar)
			return (&(str[i]));
		i++;
	}
	return (NULL);
}
