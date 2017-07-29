#include <stdio.h>
main (){
    int blank = 0;
    int tabs = 0;
    int newline = 0;
    int space=0
    char i = 0;
    while ((i = getchar()) != EOF)
        if (i == '\n')
            ++newline;
        else if (i == '\t')
            ++tab;
        else if (i =='')
            ++space     
    printf("newlines:%d \n Tabs: %d \n spaces:%d", newlines, tabs,space);
}