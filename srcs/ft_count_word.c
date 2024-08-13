/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_count_word.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ebengtss <ebengtss@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/13 15:17:53 by ebengtss          #+#    #+#             */
/*   Updated: 2024/08/13 16:57:53 by ebengtss         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../incs/libft.h"

int	ft_count_word(char const *str, char set)
{
	int	i;
	int	counter;

	i = 0;
	counter = 0;
	while (str[i])
	{
		if (i == 0 && str[i] != set)
			counter++;
		if (str[i] == set && str[i + 1] != '\0'
			&& str[i + 1] != set)
			counter++;
		i++;
	}
	return (counter);
}
