/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcapitalize.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: andry-ha <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/14 12:24:59 by andry-ha          #+#    #+#             */
/*   Updated: 2025/09/17 07:58:17 by andry-ha         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

/*
*	Function that capitalizes the first letter of each word
*	and converts all other letters to lowercase.
*	For example : hi, how are you? 42words forty-two; fifty+and+one
*	Becomes : Hi, How Are You? 42words Forty-Two; Fifty+And+One
*	first = 1 indicates the first character of the sentence
*/
int	is_alphanum(char c)
{
	if ((c < 'A' || c > 'Z') && (c < 'a' || c > 'z') && (c < '0' || c > '9'))
	{
		return (0);
	}
	return (1);
}

char	*ft_strcapitalize(char *str)
{
	int	first;
	int	i;

	first = 1;
	i = 0;
	while (str[i] != '\0')
	{
		if (is_alphanum(str[i]))
		{
			if (first == 1 && (str[i] >= 'a' && str[i] <= 'z'))
				str[i] -= 32;
			else if (!first && (str[i] >= 'A' && str[i] <= 'Z'))
				str[i] += 32;
			first = 0;
		}
		else
			first = 1;
		i++;
	}
	return (str);
}
/*
#include <stdio.h>
int	main(void)
{
	char	str[] = "hi, how are you? 42words forty-two; fifty+and+one";

	printf("Avant : %s\n", str);
	ft_strcapitalize(str);
	printf("Apres : %s\n", str);
	return (0);
}
*/
