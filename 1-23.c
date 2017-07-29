#include <stdio.h>
#include <stdlib.h>

#define PRG 0
#define CMT 1
#define QT  2
#define SLS 3
#define STR  4
#define LITR 5

int main(void)
{
    int c, state;
    char QT;

    state = PRG;
    while ((c = getchar()) != EOF) {
        if (state == PRG) {
      
            if (c == '/')
                state = SLS;
            else {
                if (c == '"' || c == '\'') {
                   
                    state = QT;
                    QT = c;
                }
                putchar(c);
            }
        } else if (state == CMT) {
         \
            if (c == '*')
                state = STR;
        } else if (state == QT) {
           
            if (c == '\\')
                state = LITR;
            else if (c == QT)
                state = PRG;
            putchar(c);
        } else if (state == SLS) {
            
            if (c == '*')
                state = CMT;
            else if (c == '"' || c == '\'') {
           
                state = QT;
                QT = c;
            } else {
                state = PRG;
                putchar('/');
                putchar(c);
            }
        } else if (state == STR) {
            if (c == '/')
                state = PRG;
            else if (state != '*')
                state = CMT;
        } else if (state == LITR) {
        
            putchar(c);
            state = QT;
        }
    }
    return EXIT_SUCCESS;
}
