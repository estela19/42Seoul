#include<unistd.h>
#include<sys/errno.h>
#include<fcntl.h>
#include<string.h>

#define SIZE 10000
#define MAX_FILE 3000

 int	g_pbyte;
char	g_buf[MAX_FILE][SIZE];

int	parseint(char *inp)
{
	int	i;
	int	num;

	i = 0;
	num = 0;
	while (inp[i] != '\0')
	{
		num *= 10;
		num += inp[i] - '0';
		i++;
	}
	return (num);
}

void	parsing(char (*input)[SIZE])
{
	int	i;

	i = 0;
	while (input[++i][0] == '-' )
		;
	if (input[i][2] != '0')
		g_pbyte = input[i][2] - '0';
	else
		g_pbyte = parseint(input[i + 1]);
}

void	print(char *str)
{
	while (*str != '\0')
	{
		write(1, str, 1);
		str++;
	}
}

int	ft_strlen(char *str)
{
	int	len;

	len = 0;
	while (*str++ != '\0')
	{
		len++;
	}
	return (len);
}

void	fflush(int fnum, char *path)
{
	int	i;
	int	j;
	int	len;

	if (fnum != 1)
	{
		print("==> ");
		print(path);
		print(" <==\n");
	}
	i = 0;
	while (i < fnum)
	{
		j = 0;
		len = ft_strlen(g_buf[i]);
		if (g_pbyte < len)
			print(&g_buf[i][len - g_pbyte]);
		else
			print(&g_buf[i][0]);
		i++;
	}
	print("\n");
}

void	print_error(char *path)
{
	print ("ft_tail: ");
	print (path);
	print (": ");
	print (strerror(errno));
	print ("\n");
}

void	set_buf(void)
{
	int	i;
	int	j;

	i = 0;
	j = 0;
	while (i < MAX_FILE)
	{
		while (j < SIZE)
		{
			g_buf[i][j] = 0;
			j++;
		}
		i++;
	}
}

void run(char *file, int fnum, int idx)
{
	int	fd;

	fd = open(file, O_RDONLY);
	if (fd == -1)
	{
		print_error(file);
		return (0);
	}
	if (read(fd, g_buf[idx], SIZE) == -1)
	{
		idx++;
		print_error(file);
	}
	if (close(fd) == -1)
		print_error(file);
	fflush(fnum, file);
}

int	main(int argc, char **argv)
{
	int	i;
	int	idx;
	int	fd;
	int	fnum;

	i = 0;
	idx = 0;
	fnum = argc - 1;
	set_buf();
	while (++i < argc)
	{
		if (argv[i][0] == '-')
		{
			if (argv[i][2] != '\0')
			{
				g_pbyte = parseint(&argv[i][2]);
				fnum -= 1;
			}
			else
			{
				g_pbyte = parseint(argv[++i]);
				fnum -= 2;
			}
			i++;
		}
		fd = open(argv[i], O_RDONLY);
		if (fd == -1)
		{
			print_error(argv[i]);
			return (0);
		}
		if (read(fd, g_buf[idx], SIZE) == -1)
		{
			idx++;
			print_error(argv[i]);
		}
		if (close(fd) == -1)
			print_error(argv[i]);
		fflush(fnum, argv[i]);
	}
	return (0);
}
