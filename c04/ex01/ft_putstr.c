/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: andry-ha <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/17 15:24:03 by andry-ha          #+#    #+#             */
/*   Updated: 2025/09/17 15:31:54 by andry-ha         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

/*
*	This function displays a string of characters on the standard output
*	'\0' is a special character in the ASCII table indicating a null character
*	'\0'indicates the end of a string
*/
void	ft_putstr(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		write(1, &str[i], 1);
		i++;
	}
}
/*
int	main(void)
{
	char	*str;

	str = "bonjour toto";
	ft_putstr(str);
	return (0);
}
*/
