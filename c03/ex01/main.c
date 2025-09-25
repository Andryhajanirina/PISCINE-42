/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: andry-ha <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/15 15:54:03 by andry-ha          #+#    #+#             */
/*   Updated: 2025/09/21 15:14:17 by andry-ha         ###   ########.fr       */
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
int	ft_strncmp(char *s1, char *s2, unsigned int n);

char	*ft_strcpy(char *dest, char *src)
{
	int	i;

	i = 0;
	while (src[i] != '\0')
	{
		dest[i] = src[i];
		i++;
	}
	dest[i] = src[i];
	return (dest);
}

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

/*
*	Function to put number
*/
void	ft_putnbr(int nb)
{
	if (nb < 0)
	{
		ft_putchar('-');
		nb = nb * -1;
	}
	if (nb >= 10)
	{
		ft_putnbr(nb / 10);
		ft_putnbr(nb % 10);
	}
	else
	{
		ft_putchar(nb + '0');
	}
}

int	main(void)
{
	char			s1[80];
	char			s2[80];
	unsigned int	n;

	ft_strcpy(s1, "bonjaur");
	ft_strcpy(s2, "bonjour");
	n = 4;
	ft_putnbr(ft_strncmp(s1, s2, n));
	return (0);
}
