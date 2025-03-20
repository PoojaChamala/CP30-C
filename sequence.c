#include<stdio.h>
#include<string.h>
#include<stdlib.h>
int main(int argc, char *argv[]){
    int n;
    char command[50];
    strcpy(command,argv[1]);
    n=atoi(argv[1]);
    while(n<=10){
        printf("%d\n",n);
        n++;
        if(n>10){
            break;
        }
    }
    getchar();
}