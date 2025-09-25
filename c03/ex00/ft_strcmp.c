/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: andry-ha <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/16 10:19:02 by andry-ha          #+#    #+#             */
/*   Updated: 2025/09/18 14:41:54 by andry-ha         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

/*
*   The  ft_strcmp()  function compares the two strings s1 and s2.
*   • 0, if the s1 and s2 are equal;
*   • A negative value if s1 is less than s2;
*   • A positive value if s1 is greater than s2.
*   Example : ft_strcmp("apple", "app"): Returns a positive value
*   because "apple" is longer than "app". 
*/

int	ft_strcmp(char *s1, char *s2)
{
	while (*s1 == *s2)
	{
		if (*s1 == '\0' && *s2 == '\0')
			return (0);
		s1++;
		s2++;
	}
	return (*s1 - *s2);
}
/*
#include <stdio.h>

int	main(void)
{
	char	*str1;
	char	*str2;
	int		res;

	str1 = "apala";
	str2 = "apala";
	res = ft_strcmp(str1, str2);
	printf("%d", res);
	return (0);
}
*/
