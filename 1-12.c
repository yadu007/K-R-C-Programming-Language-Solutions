#include <stdio.h>
#define TRUE  1
#define FALSE 0

int main(void)
{
    int input, blank;

    blank = FALSE;
    while ((input = getchar()) != EOF) {
        if (input == ' ' || input == '\t' || input == '\n') {
            if (blank == FALSE)
                putchar('\n');
            blank = TRUE;
        } else {
            blank = FALSE;
            putchar(input);
        }
    }
}