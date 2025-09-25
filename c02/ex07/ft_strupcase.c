/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strupcase.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: andry-ha <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/14 11:34:08 by andry-ha          #+#    #+#             */
/*   Updated: 2025/09/14 11:34:16 by andry-ha         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

/*
*	Function that converts every letter to uppercase.
*	A: is 65 in ASCII code (capital letter ranging from 65 to 90)
*	a: is 97 in ASCII code (lowercase from 97 to 122)
*/
char	*ft_strupcase(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		if ((str[i] >= 'a' && str[i] <= 'z'))
		{
			str[i] -= 32;
		}
		i++;
	}
	return (str);
}
