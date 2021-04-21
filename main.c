#include <stdio.h>
#include <stdlib.h>
#include "libasm.h"
#include "errno.h"
#include <fcntl.h>

int main() {
	printf("\033[1;36m""\tft_strlen:\n""\033[0m");
	printf("  Empty string:\n");
	printf("|%zu|\n", ft_strlen(""));
	printf("  Very long string:\n");
	printf("|%zu|\n", ft_strlen("qwertyuiopasdfghjklzxcvbnm"));

	printf("\033[1;36m""\tft_strcpy:\n""\033[0m");
	char *dst;
	dst = malloc(sizeof(char) * 27);
	printf("  Empty string:\n");
	printf("|%s|\n", ft_strcpy(dst, ""));
	printf("  Very long string:\n");
	printf("|%s|\n", ft_strcpy(dst, "qwertyuiopasdfghjklzxcvbnm"));
	free(dst);

	printf("\033[1;36m""\tft_strcmp:\n""\033[0m");
	printf("  2 empty string:\n");
	printf("|%d|\n", ft_strcmp("", ""));
	printf("  1 string is empty:\n");
	printf("|%d|\n", ft_strcmp("", "absd"));
	printf("  2 string is empty:\n");
	printf("|%d|\n", ft_strcmp("adsd", ""));
	printf("  2 not equal string:\n");
	printf("|%d|\n", ft_strcmp("adsd", "qwrr"));
	printf("  2 equal string:\n");
	printf("|%d|\n", ft_strcmp("adsd", "adsd"));

	printf("\033[1;36m""\tft_write:\n""\033[0m");
	printf("  With the stdout:\n");
	printf("|%zd|\n",write(0, "Hi, there!\n", 11));
	printf("  With the file descriptor:\n");
	int fd;
	fd = open("t.txt", O_WRONLY);
	printf("|%zd|\n",write(fd, "Hi, there!\n", 11));
	close(fd);
	printf("  With the wrong file descriptor:\n");
	printf("|%zd|, errno: %d\n", write(22, "Hi, there!\n", 11), errno);

	printf("\033[1;36m""\tft_read:\n""\033[0m");
	char buf[25];
	printf("  With the stdin:\n");
	printf("|%zd|, buf: '%s'\n",read(0, buf, 11), buf);
	printf("  With the file descriptor:\n");
	fd = open("t.txt", O_RDONLY);
	printf("|%zd|, buf: '%s'\n", read(fd, buf, 10), buf);
	close(fd);
	printf("  With the wrong file descriptor:\n");
	printf("|%zd|, buf: '%s', errno: %d\n", read(22, buf, 10), buf, errno);

	printf("\033[1;36m""\tft_strdup:\n""\033[0m");
	printf("  Empty string:\n");
	dst = ft_strdup("");
	printf("|%s|\n", dst);
	free(dst);
	dst = ft_strdup("qwertyuiopasdfghjklzxcvbnm");
	printf("  Very long string:\n");
	printf("|%s|\n", dst);
	free(dst);
}
