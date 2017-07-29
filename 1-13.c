#include<stdio.h>
int  main(){
  char input;
  while((input=getchar())!=EOF){
    if(input == '\t' || input == '\n'|| input == ' '){
      printf("\n");
    }
    else{
      printf("#");
    }
    }
    }