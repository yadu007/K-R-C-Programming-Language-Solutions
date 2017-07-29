#include<stdio.h>
int br,brk,prn;
void incomment();
void inquote(int c);
void search(int c);
int main(void)
{
    int c;
    
    extern int br,brk,prn;

    while((c=getchar())!=EOF)
        if( c == '/')
            if((c=getchar())== '*')
                incomment();
            else 
                search(c);
        else if( c == '\'' || c == '"')
            inquote(c);
        else
            search(c);

    if( br < 0)
    {
        printf("Unmatched brs\n");
        br = 0;
    }   
    else if( brk < 0)
    {
        printf("Unmatched brkets\n");
        brk = 0;
    }
    else if( prn < 0)
    {
        printf("Unmatched prnthesis\n");
        prn = 0;
    }
    
    if(br > 0)
        printf("Unmatched brs\n");
    else if(brk > 0)
        printf("Unmatched brkets\n");
    else if(prn > 0)
        printf("Unmatched prnthesis\n"); 

    return 0;
}

void incomment()
{
    int c,d;
    
    c = getchar();
    d = getchar();

    while(c != '*' || d != '/')
    {
        c = d;
        d = getchar();
    }
}

void inquote(int c)
{
    int d;

    putchar(c);

    while((d=getchar())!=c)
        if( d == '\\')
            getchar();
}

void search(int c)
{
    extern int br,brk,prn;

    if ( c == '{')
        --br;
    else if ( c == '}')
        ++br;
    else if( c == '(')
        --brk;
    else if( c == ')')
        ++brk;
    else if( c == '[')
        --prn;
    else if( c == ']')
        ++prn;
}