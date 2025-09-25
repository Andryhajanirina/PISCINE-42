/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: trakotoz <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/14 16:09:43 by trakotoz          #+#    #+#             */
/*   Updated: 2025/09/18 15:25:56 by andry-ha         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

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
	while (s1[i] != '\0' && s2[i] != '\0' && s1[i] == s2[i])
		i++;
	if (i == n)
		return (0);
	return (s1[i] - s2[i]);
}

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


#include <stdio.h>

int	main(void)
{
	char str[] = "Ceci est une phrase test.";
	char to_find[] = "une";
	char *resultat;

	resultat = ft_strstr(str, to_find);
	if (resultat != NULL) {
		printf("La sous-chaine est : %s\n", resultat);
	} else {
		printf("Sous-chaine non trouvee.\n");
	}
	return (0);
}

