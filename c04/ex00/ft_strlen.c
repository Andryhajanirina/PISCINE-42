/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlen.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: andry-ha <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/17 15:15:48 by andry-ha          #+#    #+#             */
/*   Updated: 2025/09/17 15:22:59 by andry-ha         ###   ########.fr       */
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
/*
#include <stdio.h>

int	main(void)
{
	char	*str;
	int		len;

	str = "Bonjour";
	len = ft_strlen(str);
	printf("La longueur de %s est : %d", str, len);
}
*/
