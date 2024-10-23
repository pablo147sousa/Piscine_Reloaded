/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pmoreira <pmoreira@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/23 12:17:48 by pmoreira          #+#    #+#             */
/*   Updated: 2024/10/23 14:32:00 by pmoreira         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

char	*ft_strdup(char *src);
int		ft_strlen(char *str);

int	ft_strlen(char *str)
{
	int	i;

	i = 0;
	while (str[i] != 0)
		i++;
	return (i);
}

char	*ft_strdup(char *src)
{
	int		i;
	int		size;
	char	*dup;

	i = 0;
	size = ft_strlen(src);
	dup = (char *) malloc(size * sizeof(char));
	if (dup == 0)
		return (0);
	while (src[i] != 0)
	{
		dup[i] = src[i];
		i++;
	}
	return (dup);
}
/*
#include <string.h>
#include <stdio.h>

int	main(void)
{
	char	*dupR;
	char	*dupE;
	char	*src = "tesasdadste";

	dupR = ft_strdup(src);
	dupE = strdup(src);
	printf("Result: %s\n", dupR);
	printf("Expected: %s\n", dupE);
}
*/