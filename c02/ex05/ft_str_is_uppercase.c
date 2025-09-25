/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_uppercase.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: andry-ha <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/11 09:31:00 by andry-ha          #+#    #+#             */
/*   Updated: 2025/09/11 11:44:32 by andry-ha         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

/*
*	Function returns 1 if the given string contains only uppercase alphabets,
*	otherwise 0
*	A: is 65 in ASCII code (capital letter ranging from 65 to 90)
*	a: is 97 in ASCII code (lowercase from 97 to 122)
*/
int	ft_str_is_uppercase(char *str)
{
	while (*str)
	{
		if (!(*str >= 'A' && *str <= 'Z'))
		{
			return (0);
		}
		str++;
	}
	return (1);
}
