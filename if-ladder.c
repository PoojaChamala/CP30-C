#include<stdio.h>
#include<string.h>
#include<stdlib.h>

int main(int argc, char *argv[], char *envp[]){
    char command[50];
    strcpy(command,argv[0]);
    int n=atoi(argv[1]);
    if(n>=35){
        if(n>=35||n>=65){
            printf("Third class\n");
        }
        else if (n>=65||n>=85){
            printf("Second class\n");
        }
        else {
            printf("First class\n");
        }
    }
    else{
        printf("Fail\n");
    }
    getchar();
}