/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_factorial.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pmoreira <pmoreira@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/22 14:59:22 by pmoreira          #+#    #+#             */
/*   Updated: 2024/10/22 15:16:15 by pmoreira         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <limits.h>

int	ft_iterative_factorial(int nb);

int	ft_iterative_factorial(int nb)
{
	long int	result;
	int			i;

	result = 1;
	i = 2;
	if (nb < 0)
		return (0);
	while (i <= nb)
	{
		result = result * i;
		if (result > INT_MAX)
			return (0);
		i++;
	}
	return (result);
}
/*
#include <stdio.h>

int main()
{
	printf("Result: %d", ft_iterative_factorial(INT_MAX));
	return (0);
}
*/