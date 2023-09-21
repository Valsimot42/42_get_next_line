/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tbolkova <tbolkova@student.42wolfsburg.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/21 11:51:33 by tbolkova          #+#    #+#             */
/*   Updated: 2023/09/21 11:51:37 by tbolkova         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "get_next_line.h"

int	main(int argc, char **argv)
{
	int		fd;
	char	*line;

	(void)argc;
	fd = open(argv[1], O_RDONLY);
	line = "";
	if (fd == -1)
		return (-1);
	while (line != NULL)
	{
		line = get_next_line(fd);
		printf("%s", line);
	}
	fd = close(fd);
	return (0);
}