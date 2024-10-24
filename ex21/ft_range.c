/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_range.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pmoreira <pmoreira@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/23 14:33:29 by pmoreira          #+#    #+#             */
/*   Updated: 2024/10/24 15:02:12 by pmoreira         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	*ft_range(int min, int max);

int	*ft_range(int min, int max)
{
	int	*range;
	int	i;

	i = 0;
	if (min >= max)
		return (0);
	range = (int *) malloc((max - min) * sizeof(int));
	if (range == 0)
		return (0);
	while (i < (max - min))
	{
		range[i] = min + i;
		i++;
	}
	return (range);
}
/*
#include <stdio.h>

int	main(void)
{
	int	i;
	int	*range;
	int	min;
	int	max;

	min = -1;
	max = 8;
	i = 0;
	range = ft_range(min, max);
	while (i < (max - min))
	{
		printf("%d\n", range[i]);
		i++;
	}
}
*/