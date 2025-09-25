/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_printable.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: andry-ha <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/11 10:56:48 by andry-ha          #+#    #+#             */
/*   Updated: 2025/09/11 11:24:44 by andry-ha         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

/*
*	Function returns 1 if the given string contains only printable characters,
*	otherwise 0
*	Printable characters is from 32 to 126
*/
int	ft_str_is_printable(char *str)
{
	while (*str)
	{
		if (!(*str >= 32 && *str <= 126))
		{
			return (0);
		}
		str++;
	}
	return (1);
}
