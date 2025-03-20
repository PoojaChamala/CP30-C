#include<stdio.h>
#include<conio.h>
#include<stdlib.h>

int main(int argc, char *argv[]){
    int var1,var2;
    var1=atoi(argv[1]);
    var2=atoi(argv[2]);
    int sum=var1+var2;
    printf("Sum:%d\n",sum);
    getch();
}