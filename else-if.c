#include<stdio.h>
#include<string.h>
#include<stdlib.h>
int main(int argc, char *argv[]){
    char command[50];
    int n;
    strcpy(command,argv[1]);
    n=atoi(argv[1]);
    if(n>0){
        printf("%d is positive number.",n);
    }
    else if (n<0)
    {
        printf("%d is negative number.",n);
    }
    else{
        printf("%d",n);
    }
    getchar();
}