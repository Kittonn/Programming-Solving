#include <stdio.h>
#include <stdlib.h>


int main() {
    int a,b;
    scanf("%d %d",&a,&b);
    if (a==b) {
        printf("AB");
    } else if (a>b){
        printf("A");
    } else {
        printf("B");
    }
    return 0;
}

