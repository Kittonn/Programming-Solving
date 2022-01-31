#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>

int recursive(int n){
    if (n==0){
        return 1;
    } else if (n < 0) {
        return -1;
    }
    return recursive(n-1) + 100;
}

int main() {
    int n;
    scanf("%d",&n);
    printf("%d",recursive(n));
    return 0;
}

