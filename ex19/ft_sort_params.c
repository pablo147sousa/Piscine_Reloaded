/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_params.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pmoreira <pmoreira@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/23 11:50:47 by pmoreira          #+#    #+#             */
/*   Updated: 2024/10/23 12:11:28 by pmoreira         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c);
void	ft_sort_params(int argc, char *argv[]);
void	ft_print_params(char *argv[]);
void	ft_swap(char *s1[], char *s2[]);
int		ft_strcmp(char *s1, char *s2);

int	ft_strcmp(char *s1, char *s2)
{
	int	i;

	i = 0;
	while ((s1[i] == s2[i]) && s1[i] != 0)
		i++;
	return (s1[i] - s2[i]);
}

void	ft_swap(char *s1[], char *s2[])
{
	char	*temp;

	temp = *s1;
	*s1 = *s2;
	*s2 = temp;
}

void	ft_print_params(char *argv[])
{
	int	i;
	int	j;

	i = 1;
	while (argv[i] != 0)
	{
		j = 0;
		while (argv[i][j] != 0)
		{
			ft_putchar(argv[i][j]);
			j++;
		}
		ft_putchar('\n');
		i++;
	}
}

void	ft_sort_params(int argc, char *argv[])
{
	int	i;
	int	j;
	int	temp;

	i = 1;
	while (i < argc)
	{
		j = i + 1;
		temp = i;
		while (j < argc)
		{
			if (ft_strcmp(argv[j], argv[temp]) < 0)
				temp = j;
			j++;
		}
		if (i != temp)
			ft_swap(&argv[i], &argv[temp]);
		i++;
	}
}

/*
void	ft_putchar(char c)
{
	write(1, &c, 1);
}
*/
int	main(int argc, char *argv[])
{
	if (argc > 1)
	{
		ft_sort_params(argc, argv);
		ft_print_params(argv);
	}
	return (0);
}
