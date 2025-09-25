/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: andry-ha <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/16 16:19:34 by andry-ha          #+#    #+#             */
/*   Updated: 2025/09/21 08:59:55 by andry-ha         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	ft_strlen(char *str)
{
	int	len;

	len = 0;
	while (*str != '\0')
	{
		len++;
		str++;
	}
	return (len);
}

int	ft_strncmp(char *s1, char *s2, unsigned int n)
{
	unsigned int	i;

	i = 0;
	while (i < n - 1 && *s1 != '\0' && *s2 != '\0' && *s1 == *s2)
	{
		s1++;
		s2++;
		i++;
	}
	return (*s1 - *s2);
}

/*
*	The function searches for the first occurrence of a substring (needle)
*	within a main string (haystack).
*	The terminating null bytes ('\0') are  not compared.
*	Here *str is the main string (haystack)
*	And *to_find is the (needle)
*/
char	*ft_strstr(char *str, char *to_find)
{
	int	i;
	int	to_find_len;

	i = 0;
	to_find_len = ft_strlen(to_find);
	if (to_find_len == 0)
		return (str);
	while (str[i] != '\0')
	{
		if (ft_strncmp(str + i, to_find, to_find_len) == 0)
			return (str + i);
		i++;
	}
	return (0);
}
/*
#include <stdio.h>

int	main(void)
{
	char	*str;
	char	*to_find;
	char	*resultat;

	str = "Ceci un est une phrase test.";
	to_find = "un";
	resultat = ft_strstr(str, to_find);
	if (resultat != NULL)
		printf("La sous-chaine est : %s\n", resultat);
	else
		printf("Sous-chaine non trouvee.\n");
	return (0);
}
*/
