/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ultimate_div_mod.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: andry-ha <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/07 09:28:54 by andry-ha          #+#    #+#             */
/*   Updated: 2025/09/07 11:00:19 by andry-ha         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

/*
*	This function divides the value pointed to by ‘a’
*	by the value pointed to by ‘b’.
*	The	result of the division is stored in the integer pointed to by ‘a’,
*	while the remainder is stored in the integer pointed to by ‘b’.
*/
void	ft_ultimate_div_mod(int *a, int *b)
{
	int	div;
	int	mod;

	div = *a / *b;
	mod = *a % *b;
	*a = div;
	*b = mod;
}
