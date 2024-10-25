/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pmoreira <pmoreira@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/25 09:26:32 by pmoreira          #+#    #+#             */
/*   Updated: 2024/10/25 16:46:14 by pmoreira         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <fcntl.h>

int		ft_display_file(char *str);
void	ft_error(void);

void	ft_error(void)
{
	write(1, "Cannot read file.", 17);
	write(1, "\n", 1);
}

int	ft_display_file(char *src)
{
	int		fd;
	int		rd;
	char	output[256];

	fd = open(src, O_RDONLY);
	if (fd < 0)
		return (-1);
	rd = read(fd, output, sizeof(output));
	while (rd > 0)
	{
		if (rd == -1)
			return (-1);
		else
			write(1, output, rd);
		rd = read(fd, output, sizeof(output));
	}
	close(fd);
	return (0);
}

int	main(int argc, char *argv[])
{
	if (argc <= 1)
		write(1, "File name missing.", 18);
	else if (argc == 2)
	{
		if (ft_display_file(argv[1]) == -1)
		{
			ft_error();
			return (1);
		}
	}
	else
		write(1, "Too many arguments.", 19);
	write(1, "\n", 1);
	return (0);
}
