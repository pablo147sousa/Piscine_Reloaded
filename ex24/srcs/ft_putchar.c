/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putchar.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pmoreira <pmoreira@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/24 12:52:58 by pmoreira          #+#    #+#             */
/*   Updated: 2024/10/24 12:59:13 by pmoreira         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ex24/includes/libft.h"

void	ft_putchar(char c);

void	ft_putchar(char c)
{
	write(1, &c, 1);
}
