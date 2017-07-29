#include <stdio.h>

#define TRUE  1
#define FALSE 0

int main(void)
{
    int input, blank;
    blank = FALSE;
    while ((input = getchar()) != EOF) {
        if (input == ' ') {
            if (blank == FALSE) {
                putchar(input);
                blank = TRUE;
        }
        }
        if (c != ' ') {
            putchar(input);
            blank = FALSE;
        }
    }
}