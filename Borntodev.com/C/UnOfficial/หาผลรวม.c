#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>

int main() {
    int n,s = 0;
    scanf("%d",&n);
    for(int i =2 ; i<=n;i+=2){
        s+=(i*i);
    }
    printf("%d",s);
    return 0;
}

