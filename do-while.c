#include<stdio.h>
#include<string.h>
#include<stdlib.h>

int main(int argc, char *argv[]){
    char command[50];
    strcpy(command,argv[0]);
    int n=atoi(argv[1]);
    do{
        printf("%d\n",n);
        n++;
    }
    while(n<=10);
    getchar();
}