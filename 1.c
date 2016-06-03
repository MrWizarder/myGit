#include <stdio.h>
#include <stdlib.h>

// FILE * fopen(const char *restrict filename, const char *restrict mode);

//size_t fread(void *restrict ptr, size_t size, size_t nitems, FILE *restrict stream);

int main(void)
{

	FILE * fp = fopen("./file", "r");

	if(!fp)
	{
		perror("fopen");
		exit(-1);
	}
	char buf[64] = {};

	size_t ret = fread(buf, 1, 63, fp);

	printf("%s %ld\n", buf, ret);

	fclose(fp);
	return 0;
}
