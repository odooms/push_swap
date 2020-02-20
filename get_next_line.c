/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: odooms <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/07/30 11:00:01 by odooms            #+#    #+#             */
/*   Updated: 2019/09/25 12:23:46 by odooms           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "get_next_line.h"

static	int		firstline(char **line, char **get)
{
	int			i;
	char		*tmp;

	i = 0;
	while ((*get)[i] != '\n' && (*get)[i] != '\0')
		i++;
	*line = ft_strsub(*get, 0, i);
	if ((*get)[i] == '\0')
		ft_strdel(get);
	else
	{
		tmp = *get;
		*get = ft_strdup(*get + i + 1);
		free(tmp);
	}
	return (0);
}

int				get_next_line(const int fd, char **line)
{
	static char	*get[2045];
	char		buff[BUFF_SIZE + 1];
	ssize_t		chars;
	char		*tmp;

	if (fd < 0 || !line || (read(fd, buff, 0) < 0))
		return (-1);
	if (get[fd] == NULL && !(get[fd] = ft_strnew(0)))
		return (-1);
	while (!ft_strchr(get[fd], '\n') && (chars = read(fd, buff, BUFF_SIZE)) > 0)
	{
		buff[chars] = '\0';
		tmp = get[fd];
		get[fd] = ft_strjoin(get[fd], buff);
		free(tmp);
	}
	if (chars == 0 && !ft_strlen(get[fd]))
	{
		ft_strdel(&get[fd]);
		return (0);
	}
	firstline(line, &get[fd]);
	return (1);
}
