#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>

int main() {
    int n,m,y,b,a;
    scanf("%d %d %d",&n,&m,&y);
    b = ((m-1)*y+n) / (m-1);
    a = n+b;
    printf("%d %d",a,b);
    return 0;
}

