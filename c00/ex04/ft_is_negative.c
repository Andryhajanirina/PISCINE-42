/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_is_negative.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: andry-ha <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/04 06:24:01 by andry-ha          #+#    #+#             */
/*   Updated: 2025/09/04 06:47:02 by andry-ha         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_is_negative(int n)
{
	char	is_negative;
	char	is_positive;

	is_negative = 'N';
	is_positive = 'P';
	if (n >= 0)
	{
		write(1, &is_positive, 1);
	}
	else
	{
		write(1, &is_negative, 1);
	}
}
