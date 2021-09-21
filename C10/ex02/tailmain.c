#include<unistd.h>
#include<sys/errno.h>
#include<fcntl.h>
#include<string.h>

#define SIZE 10000
#define MAX_FILE 3000
#define COMMAND 1

 int	g_pbyte;
char	g_buf[MAX_FILE][SIZE];

int	parseint(char *inp)
{
	int	i;
	int	num;
	int	digit;

	i = 0;
	num = 0;
	digit = 0;
	while (inp[i] != '\0')
	{
		digit = inp[i] - '0';
		if (digit > 9 || digit < 0)
			return (-1);
		num *= 10;
		num += digit;
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

void	fflush(int fnum, char *path, int i)
{
	int	len;

	if (i != 0)
		print("\n");
	if (fnum != 1)
	{
		print("==> ");
		print(path);
		print(" <==\n");
	}
	len = ft_strlen(g_buf[i]);
	if (g_pbyte < len)
		print(&g_buf[i][len - g_pbyte]);
	else
		print(&g_buf[i][0]);
}

void	noexist_error(char *path)
{
	print ("tail: cannot open '");
	print (path);
	print ("' for reading: ");
	print (strerror(errno));
	print ("\n");
}

void	invalidbyte_error(char *str)
{
	print ("tail: invalid number of bytes: '");
	print (str);
	print ("'\n");
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
		noexist_error(file);
	}
	else
	{
		read(fd, g_buf[idx], SIZE);
		close(fd);
		fflush(fnum, file, idx);
	}
}

int parsebyte(char *arg)
{
	g_pbyte = parseint(arg);
	if (g_pbyte == -1)
	{
		invalidbyte_error(arg);
		return (-1);
	}
	return (0);
}

int parseoption(char **argv, int* opnum)
{
	if (argv[COMMAND][2] != '\0')
	{
		if (parsebyte(&argv[COMMAND][2]) == -1)
			return (-1);
		*opnum = 1;
	}
	else
	{
		if (parsebyte(argv[COMMAND + 1]) == -1)
			return (-1);
		*opnum = 2;
	}
	return (0);
}

int	main(int argc, char **argv)
{
	int	i;
	int	idx;
	int	fnum;
	int	opnum;

	i = 0;
	idx = 0;
	fnum = argc - 1;
	set_buf();
	if (argv[COMMAND][0] == '-')
	{
		if (parseoption(argv, &opnum) == -1)
			return (0);
		fnum -= opnum;
		i += opnum;
	}
	while (++i < argc)
	{
		run(argv[i], fnum, idx++);
	}
	return (0);
}
