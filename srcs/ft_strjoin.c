/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ebengtss <ebengtss@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/22 16:07:34 by ebengtss          #+#    #+#             */
/*   Updated: 2024/08/13 16:57:22 by ebengtss         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../incs/libft.h"

char	*ft_strjoin(char const *s1, char const *s2)
{
	char	*str;
	size_t	lens1;
	size_t	lens2;

	lens1 = ft_strlen(s1);
	lens2 = ft_strlen(s2);
	str = malloc(sizeof(char) * (lens1 + lens2 + 1));
	if (!str)
		return (NULL);
	ft_strlcpy(str, s1, lens1);
	ft_strlcpy(&(str[lens1]), s2, lens2);
	return (str);
}

char	*ft_strjoin_s1(char const *s1, char const *s2)
{
	char	*str;
	size_t	lens1;
	size_t	lens2;

	if (!s1)
		return (ft_strdup(s2));
	if (!s2)
		return (free((void *)s1), NULL);
	lens1 = ft_strlen(s1);
	lens2 = ft_strlen(s2);
	str = malloc(sizeof(char) * (lens1 + lens2 + 1));
	if (!str)
		return (free((void *)s1), NULL);
	ft_strlcpy(str, s1, lens1);
	ft_strlcpy(&(str[lens1]), s2, lens2);
	free((void *)s1);
	return (str);
}

char	*ft_strjoin_s2(char const *s1, char const *s2)
{
	char	*str;
	size_t	lens1;
	size_t	lens2;

	if (!s2)
		return (ft_strdup(s1));
	if (!s1)
		return (free((void *)s2), NULL);
	lens1 = ft_strlen(s1);
	lens2 = ft_strlen(s2);
	str = malloc(sizeof(char) * (lens1 + lens2 + 1));
	if (!str)
		return (free((void *)s2), NULL);
	ft_strlcpy(str, s1, lens1);
	ft_strlcpy(&(str[lens1]), s2, lens2);
	free((void *)s2);
	return (str);
}
