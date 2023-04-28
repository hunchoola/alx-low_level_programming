#include <stdio.h>

void first(void) __attribute__ ((constructor));

/**
 * first - prints a Sentence before main
 * function is executed completely
 */
void first(void)
{
printf("You're beat! and yet, you must allow,\n");
printf("I bore my house upon my back!\n");
}
