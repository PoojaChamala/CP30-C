#include<stdio.h>
#include<string.h>
#include<stdlib.h>
int main(int argc, char *argv[]){
    char command[50];
    int n;
    strcpy(command,argv[1]);
    n=atoi(argv[1]);
    switch(n){
        case 1:
        if(n==1){
            printf("Monday");
        }
        break;
        case 2:
        if(n==2){
            printf("Tuesday");
        }
        break;
        case 3:
        if(n==3){
            printf("wednesday");
        }
        break;
        case 4:
        if(n==4){
            printf("Thursday");
        }
        break;
        case 5:
        if(n==5){
            printf("Friday");
        }
        break;
        case 6:
        if(n==6){
            printf("Saturday");
        }
        break;
        case 7:
        if(n==7){
            printf("Sunday");
        }
        break;
        default:
        printf("Enter a number from 1 to 7:");      
    }
    getchar();
}