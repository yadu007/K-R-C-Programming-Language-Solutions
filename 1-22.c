#include <stdio.h>
#include <stdlib.h>

#define TABWIDTH   4
#define LINELENGTH 40

int main(void)
{
    int i;
    int c, linelen, wordlen, wslen;
    char wordbuf[LINELENGTH];

    linelen = wordlen = wslen = 0;
    while ((c = getchar()) != EOF) {
        if (c == ' ' || c == '\t') {
            wordbuf[wordlen] = '\0';
            wslen = c == '\t' ? TABWIDTH : 1;
            if (linelen + wordlen > LINELENGTH){
                putchar('\n');
                linelen = wordlen;
            } else {
                linelen = linelen + wordlen;
            }
            printf("%s", wordbuf);
            if (linelen + wslen > LINELENGTH) {
                putchar('\n');
                putchar(c);
                linelen = wslen;
            } else {
                putchar(c);
                linelen = linelen + wslen;
            }
            wordlen = 0;
        } else if (c == '\n') {
            wordbuf[wordlen] = '\0';
            if (linelen + wordlen > LINELENGTH)
                putchar('\n');
            printf("%s", wordbuf);
            putchar(c);
            linelen = wordlen = 0;
        } else {
            if (wordlen == LINELENGTH) {
                for (i = 0; i < LINELENGTH-1; ++i)
                    putchar(wordbuf[i]);
                putchar('-');
                putchar('\n');
                wordbuf[0] = wordbuf[LINELENGTH-1];
                wordlen = 1;
                linelen = 0;
            }
            wordbuf[wordlen] = c;
            wordlen = wordlen + 1;
        }
    }
    return EXIT_SUCCESS;
}