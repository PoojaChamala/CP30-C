#include<stdio.h>
#include<string.h>
#include<stdlib.h>

int main(int argc, char *argv[]){
    int n;
    char command[50];
    strcpy(command,argv[1]);
    n=atoi(argv[1]);
    for(int i=1;i<=10;i++){
            printf("%d*%d=%d\n",n,i,n*i);
        }
    getchar();
}