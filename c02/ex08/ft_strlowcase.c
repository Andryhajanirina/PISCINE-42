/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlowcase.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: andry-ha <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/14 12:37:49 by andry-ha          #+#    #+#             */
/*   Updated: 2025/09/14 14:19:34 by andry-ha         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

/*
*	Function that converts every letter to lowercase.
*	A: is 65 in ASCII code (capital letter ranging from 65 to 90)
*	a: is 97 in ASCII code (lowercase from 97 to 122)
*/
char	*ft_strlowcase(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		if ((str[i] >= 'A' && str[i] <= 'Z'))
		{
			str[i] += 32;
		}
		i++;
	}
	return (str);
}
