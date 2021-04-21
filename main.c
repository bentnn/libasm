#include <stdio.h>
#include <stdlib.h>
#include "libasm.h"
#include "errno.h"

int main() {
//	printf("%d", ft_strlen(0));

//	char *dst;
//	char *s = "avbcas";
//	dst = malloc(sizeof(char) * 5);
//	char *str = ft_strcpy(dst, s);
//	printf("%s\n%s", dst, str);
//	char *dst = ft_strdup(0);
//	printf("%s", dst );
//	free(dst);
//	printf("%zd\n", ft_write(0, "abc\n", -4));
	char buf[20];
	printf("%zd\n", ft_read(0, buf, 4));
	printf("%s\n", buf);
	printf("%d\n", errno);
	return 0;
}
