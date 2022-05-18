/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eandre-f <eandre-f@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/25 05:47:35 by eandre-f          #+#    #+#             */
/*   Updated: 2022/05/14 15:59:57 by eandre-f         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static char	*get_line(char **acc)
{
	size_t	c;
	char	*s;
	char	*r;

	if (*acc == NULL)
		return (NULL);
	c = (size_t)(ft_strchr(*acc, '\n') - *acc) + 1;
	s = ft_substr(*acc, 0, c);
	r = ft_substr(*acc, c, ft_strlen(*acc));
	ft_strupd(acc, r);
	if (*acc[0] == '\0')
		ft_strupd(acc, NULL);
	return (s);
}

static void	read_line(int fd, char **acc, char *buffer, int *read_bytes)
{
	*read_bytes = read(fd, buffer, BUFFER_SIZE);
	if (*read_bytes > 0)
	{
		if (*acc == NULL)
			*acc = ft_strdup("");
		buffer[*read_bytes] = '\0';
		ft_strupd(acc, ft_strjoin(*acc, buffer));
		while (*read_bytes > 0 && ft_strchr(buffer, '\n') == NULL)
		{
			*read_bytes = read(fd, buffer, BUFFER_SIZE);
			buffer[*read_bytes] = '\0';
			ft_strupd(acc, ft_strjoin(*acc, buffer));
		}
	}
}

char	*get_next_line(int fd)
{
	static char	*acc[OPEN_MAX];
	char		*buffer;
	char		*line;
	int			read_bytes;

	if (fd < 0 || BUFFER_SIZE <= 0)
		return (NULL);
	buffer = (char *) malloc(sizeof(char) * (BUFFER_SIZE + 1));
	if (buffer == NULL)
		return (NULL);
	read_line(fd, &acc[fd], buffer, &read_bytes);
	line = get_line(&acc[fd]);
	free(buffer);
	return (line);
}
