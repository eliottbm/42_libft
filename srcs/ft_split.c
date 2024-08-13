/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ebengtss <ebengtss@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/27 10:05:06 by ebengtss          #+#    #+#             */
/*   Updated: 2024/08/13 16:49:42 by ebengtss         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../incs/libft.h"

void	ft_free_split(char **strs)
{
	size_t	i;

	i = 0;
	while (strs[i])
	{
		free(strs[i]);
		i++;
	}
	free(strs);
}

static int	ft_run_split(char **splitted_str, char const *s, char c)
{
	int	i;
	int	j;
	int	k;

	i = 0;
	j = 0;
	k = 0;
	while (s[i])
	{
		if (s[i] != c && (s[i + 1] == '\0' || s[i + 1] == c))
		{
			splitted_str[k] = malloc(sizeof(char) * (i - j + 2));
			if (!splitted_str[k])
				return (ft_free_split(splitted_str), 1);
			ft_strlcpy(splitted_str[k], &s[j], (i - j + 1));
			k++;
		}
		if (s[i++] == c && s[i] != c)
			j = i;
	}
	splitted_str[k] = NULL;
	return (0);
}

char	**ft_split(char const *s, char c)
{
	char	**splitted_str;
	int		words;

	words = ft_count_word(s, c);
	if (words == 0)
		return (NULL);
	splitted_str = malloc(sizeof(char *) * (words + 1));
	if (!splitted_str)
		return (NULL);
	if (ft_run_split(splitted_str, s, c))
		return (NULL);
	return (splitted_str);
}
