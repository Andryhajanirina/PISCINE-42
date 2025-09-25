/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: trakotoz <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/14 09:14:23 by trakotoz          #+#    #+#             */
/*   Updated: 2025/09/21 14:00:39 by andry-ha         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

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

#include <stdio.h>

int main(void)
{
    char            s1[80] = "bonjour";
    char            s2[80] = "bonsour";
    unsigned int    n;

    n = 4;
    printf("%d", ft_strncmp(s1, s2, n));
    return (0);
}
