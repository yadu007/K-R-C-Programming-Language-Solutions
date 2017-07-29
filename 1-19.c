#include <stdio.h>
#include <stdlib.h>

#define MAXLINE 1000

int get_line(char s[], int lim);
void reverse(char s[]);

int main(void)
{
    int len;          
    char line[MAXLINE];     

    while ((len = get_line(line, MAXLINE)) > 0) {
        reverse(line);
        printf("%s", line);
    }
    return EXIT_SUCCESS;
}

int get_line(char s[], int lim)
{
    int c, i;

    for (i=0; i<lim-1 && (c=getchar())!=EOF && c!='\n'; ++i)
        s[i] = c;
    if (c == '\n') {
        s[i] = c;
        ++i;
    }
    s[i] = '\0';
    return i;
}


void reverse(char s[])
{
    int i, l;
    char temp;


    for (l = 0; s[l] != '\0'; ++l)
        ;

    l--;

    for (i = 0; i < l; ++i) {
        temp = s[i];
        s[i] = s[l-1];
        s[l-1] = temp;
        --l;
    }
}