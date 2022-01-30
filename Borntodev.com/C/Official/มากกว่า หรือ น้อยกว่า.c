#include <stdio.h>
#include <stdlib.h>

int main() {
    int c,a;
    int M,m;
    scanf("%d %d",&c,&a);
    M = (c>a) ? c : a;
    m = (c >a) ? a : c;
    printf("MAX : %d\nMIN : %d",M,m);
    return 0;
}

