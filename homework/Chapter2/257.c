#include <stdio.h>

typedef unsigned char *byte_pointer;

void show_short(void);
void show_long(void);
void show_double(void);
void show_bytes(byte_pointer start, size_t len);

int main(int argc, char const *argv[]) 
{
    show_short();
    show_long();
    show_double();
    return 0;
}

void show_bytes(byte_pointer start, size_t len) {
    for (size_t i = 0; i < len; i++) {
	printf(" %.2x", start[i]);
    }
    printf("\n");
    
}

void show_short(void) {
    short i = 12345;
    printf("short i = 12345\n");
    show_bytes((byte_pointer)&i, sizeof(i));
}

void show_long(void) {
    long i = 12345678;
    printf("long i = 12345678\n");
    show_bytes((byte_pointer)&i, sizeof(i));
}

void show_double(void) {
    double i = 1234.5678;
    printf("double i = 1234.5678\n");
    show_bytes((byte_pointer)&i, sizeof(i));
}

