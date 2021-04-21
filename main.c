#include <stdio.h>
#include <stdlib.h>
#include "libasm.h"

int main() {
//	printf("%d", ft_strlen(0));

//	char *dst;
//	char *s = "avbcas";
//	dst = malloc(sizeof(char) * 5);
//	char *str = ft_strcpy(dst, s);
//	printf("%s\n%s", dst, str);
	char *dst = ft_strdup(0);
	printf("%s", dst );
	free(dst);

	return 0;
}
