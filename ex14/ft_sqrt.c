/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sqrt.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pmoreira <pmoreira@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/22 16:04:16 by pmoreira          #+#    #+#             */
/*   Updated: 2024/10/22 16:24:26 by pmoreira         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_sqrt(int nb);

int	ft_sqrt(int nb)
{
	int	i;

	i = 1;
	while (i < nb / i)
	{
		i++;
	}
	if (i * i == nb)
		return (i);
	return (0);
}
/*
#include <stdio.h>
#include <limits.h>
int main()
{
	printf("Result: %d", ft_sqrt(INT_MAX));
	return (0);
}
*/