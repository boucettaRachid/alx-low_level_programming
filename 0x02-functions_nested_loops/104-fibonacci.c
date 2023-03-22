#include <stdio.h>
#include <stdlib.h>
#include "holberton.h"
/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void) {
    int count = 98;
    int first = 1, second = 2;
    int next;

    printf("%d\n%d\n", first, second);

    for (int i = 2; i < count; i++) {
        next = first + second;
        printf("%d\n", next);
        first = second;
        second = next;
    }

    return 0;
}
