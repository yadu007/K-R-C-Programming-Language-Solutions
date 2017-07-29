#include <stdio.h>
#include <string.h>
 
#define MAX_SIZE 100 
 
int main()
{
    char string[MAX_SIZE];
    int i, len;
    int frequency[26];
    printf("Enter any string: ");
    gets(string);
 
    len = strlen(string);
    for(i=0; i<26; i++)
    {
        frequency[i] = 0;
    }
 
    for(i=0; i<len; i++)
    {
        if(string[i]>='a' && string[i]<='z')
        {
            frequency[string[i] - 97]++;
        }
        else if(string[i]>='A' && string[i]<='Z')
        {
            frequency[string[i] - 65]++;
 
        }
    }

    printf("\nFrequencies \n");
    for(i=0; i<26; i++)
    {

        if(frequency[i]!=0)
        {
            printf("%c = %d,  %0*c\n", (i+97), frequency[i],frequency[i],'#');
        }
    }
 
    return 0;
} 
