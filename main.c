#include<stdio.h>
#include<unistd.h>
#include<fcntl.h>

void	print(const char *str)
{
	while (*str != '\0')
	{
		write(1, str, 1);
		str++;
	}
}

void	print_error(int argc)
{
	const char	*noarg = "File name missing.\n";
	const char	*manyarg = "Too many arguments.\n";

	if (argc == 1)
		print(noarg);
	else if (argc > 2)
		print(manyarg);
}

void	set_buf(char *buf)
{
	int	i;

	i = 0;
	while (i < 1024)
		buf[i++] = 0;
}

int	main(int argc, char **argv)
{
	 int		fd;
	 int		i;
	 char		buf[1024];
	const char	*readerr = "Cannot read file.\n";

	set_buf(buf);
	print_error(argc);
	fd = open(argv[1], O_RDONLY);
	if (-1 == fd)
	{
		print(readerr);
		return (0);
	}
	read(fd, buf, 1024);
	i = 0;
	while (buf[i] != '\0')
	{
		write(1, &buf[i++], 1);
	}
	write(1, "\n", 1);
	return (0);
}