#include <stdio.h>
int main(void)
{
    int input;
    while ((input = getchar()) != EOF) {
        if (input == '\t')
            printf("\\t");
        if (input == '\b')
            printf("\\b");
        if (input == '\\')
            printf("\\\\");
        else
            printf("%c", input);
    }
}