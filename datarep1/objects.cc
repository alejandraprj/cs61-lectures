#include <cstdio>
#include "hexdump.hh"

int i1 = 61;
const int i2 = 62;

int main() {
    int i3 = 63;
    int* i4 = &i3;

    printf("i1: %d\n", i1);
    printf("i2: %d\n", i2);
    printf("i3: %d\n", i3);
    printf("i4: %p\n", i4); // note use of `%p` to print a pointer value
    printf("value pointed to by i4: %d\n", *i4);

    hexdump_object(i1);
    hexdump_object(i2);
    hexdump_object(i3);
    hexdump_object(i4);
}
