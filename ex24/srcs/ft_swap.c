/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_swap.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pmoreira <pmoreira@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/22 14:46:54 by pmoreira          #+#    #+#             */
/*   Updated: 2024/10/24 12:59:38 by pmoreira         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ex24/includes/libft.h"

void	ft_swap(int *a, int *b);

void	ft_swap(int *a, int *b)
{
	int	temp;

	temp = *a;
	*a = *b;
	*b = temp;
}
/*
#include <stdio.h>

int main()
{
	int	num1;
	int	num2;

	num1 = 0;
	num2 = 10;
	printf("antes : %d e %d", num1, num2);
	ft_swap(&num1,&num2);
	printf("depois : %d e %d", num1, num2);
	return (0);
}
*/