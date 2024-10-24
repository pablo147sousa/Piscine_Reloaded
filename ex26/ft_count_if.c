/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_count_if.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pmoreira <pmoreira@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/24 15:05:34 by pmoreira          #+#    #+#             */
/*   Updated: 2024/10/24 15:08:27 by pmoreira         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_count_if(char **tab, int (*f)(char*));

int	ft_count_if(char **tab, int (*f)(char*))
{
	int	i;
	int	count;

	i = 0;
	count = 0;
	while (tab[i] != 0)
	{
		if (f(tab[i]))
			count++;
		i++;
	}
	return (count);
}
