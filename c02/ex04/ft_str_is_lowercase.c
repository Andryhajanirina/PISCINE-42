/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_lowercase.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: andry-ha <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/11 08:27:30 by andry-ha          #+#    #+#             */
/*   Updated: 2025/09/11 09:23:04 by andry-ha         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

/*
*	Function returns 1 if the given string contains only lowercase alphabets,
*	otherwise 0
*	A: is 65 in ASCII code (capital letter ranging from 65 to 90)
*	a: is 97 in ASCII code (lowercase from 97 to 122)
*/
int	ft_str_is_lowercase(char *str)
{
	while (*str)
	{
		if (!(*str >= 'a' && *str <= 'z'))
		{
			return (0);
		}
		str++;
	}
	return (1);
}
