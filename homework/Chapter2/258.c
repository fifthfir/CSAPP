#include <stdio.h>
#include <stdint.h>

void is_little_endian(void);

void main(int argc, char const *argv[]) {
    is_little_endian();
}

void is_little_endian(void) {
	int32_t i = 1;
	unsigned char *p = (unsigned char *) &i;

	if (*p) {
		printf("1\n");
		return;
	}
	printf("0\n");
	return;
}
