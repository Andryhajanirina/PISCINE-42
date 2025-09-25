/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: andry-ha <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/22 12:06:13 by andry-ha          #+#    #+#             */
/*   Updated: 2025/09/22 12:08:23 by andry-ha         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

/*
*	The strncmp compares the first n characters of the string s1
*	with the first n characters of the string s2.
*	• 0, if the first n characters of s1 and s2 are identical.
*	• A negative value if the first differing character in s1
*	has a lower ASCII value than the corresponding character in s2
*	• A positive value if the first differing character in s1
*	has a higher ASCII value than the corresponding character in s2
*	Example : ft_strcmp("apple", "app"): Returns a positive value
*	because "apple" is longer than "app". 
*	I use i < n - 1 because the index start at 0
*/
int	ft_strncmp(char *s1, char *s2, unsigned int n)
{
	unsigned int	i;

	i = 0;
	while (i < n && s1[i] != '\0' && s2[i] != '\0' && s1[i] == s2[i])
		i++;
	if (i == n)
		return (0);
	return (s1[i] - s2[i]);
}
/*
#include <stdio.h>

int	main(void)
{
	char			s1[80] = "bonjour";
	char			s2[80] = "bonaour";
	unsigned int	n;

	n = 4;
	printf("%d", ft_strncmp(s1, s2, n));
	return (0);
}
*/
