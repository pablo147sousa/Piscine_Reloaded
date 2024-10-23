/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pmoreira <pmoreira@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/23 11:31:06 by pmoreira          #+#    #+#             */
/*   Updated: 2024/10/23 11:40:12 by pmoreira         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_strcmp(char *s1, char *s2);

int	ft_strcmp(char *s1, char *s2)
{
	int	i;

	i = 0;
	while ((s1[i] == s2[i]) && s1[i] != 0)
		i++;
	return (s1[i] - s2[i]);
}
/*
#include <string.h>
#include <stdio.h>

int main (void)
{
	char *s1 = "baaaa";
	char *s2 = "baaa";
	printf ("Result: %d\n", ft_strcmp(s1, s2));
	printf ("Expected: %d\n", strcmp(s1, s2));
}
*/