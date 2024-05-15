#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>

int main() {
    int *arr;
    int size = 5;
    arr = (int *)malloc(sizeof(int) * size);
    printf("%p\n", (void *)arr); // Print memory address of arr
    int b = sizeof(uint8_t);
    printf("%d\n", b); // Print size of uint8_t
    return 0;
}
