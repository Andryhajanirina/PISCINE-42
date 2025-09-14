/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_div_mod.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: andry-ha <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/07 09:20:43 by andry-ha          #+#    #+#             */
/*   Updated: 2025/09/07 09:26:28 by andry-ha         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

/*
*	This function divides ‘a’ by ‘b’
*	and stores the result in the integer pointed to by ‘div’.
*	It also stores the remainder of the division of ‘a’ by ‘b’
*	in the integer pointed to by ‘mod’.
*/
void	ft_div_mod(int a, int b, int *div, int *mod)
{
	*div = a / b;
	*mod = a % b;
}
