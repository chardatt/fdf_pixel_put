#include "../includes/fdf.h"

void		define_funct(int count, char *buff, char **tab)
{
	char	*tmp;

	if (count == -1)
		ft_error();
	buff[count] = '\0';
	if (*tab)
	{
		tmp = ft_strjoin(*tab, buff);
		ft_strdel(&(*tab));
		*tab = ft_strdup(tmp);
		ft_strdel(&tmp);
	}
	else
		*tab = ft_strdup(buff);
}

char		*fd_to_tab(int fd)
{
	char	*buff;
	char	*tab;
	int		count;

	count = 0;
	if (!(tab = ft_strnew(FDF_BUFF_SIZE)))
		return (NULL);
	if (!(buff = ft_strnew(FDF_BUFF_SIZE)))
		return (NULL);
	while ((count = read(fd, buff, FDF_BUFF_SIZE)))
		define_funct(count, buff, &tab);
	ft_strdel(&buff);
	return (tab);
}

char		**tab_to_array(char *argv)
{
	int		fd;
	char	*tab;
	char	**str;

	fd = open(argv, O_RDONLY);
	tab = fd_to_tab(fd);
	close(fd);
	str = ft_strsplit(tab, '\n');
	ft_strdel(&tab);
	return (str);
}
