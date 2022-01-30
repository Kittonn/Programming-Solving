#include <stdio.h>
#include <stdlib.h>

/*
Welcome Somjit !
Sommai 108 Eleven Shop
*/
int main() {
    char name[30];
    //scanf("%s",&name);
    fgets(name,30,stdin);
    printf("Welcome %s !\nSommai 108 Eleven Shop",name);
    return 0;
}

