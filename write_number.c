/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   mywrite.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: andry-ha <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/18 08:09:26 by andry-ha          #+#    #+#             */
/*   Updated: 2025/09/18 08:15:21 by andry-ha         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	ft_lenstr(char *str)
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

int	main(void)
{
	char *str;
	int	len_str;

	str = "Hello, world !";
	len_str = ft_lenstr(str);
	write(1, "Hello, world !", len_str);
	return (0);
}
