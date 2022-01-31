#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>

int main() {
    int n;
    scanf("%d",&n);
    if (n % 5 == 0){
        printf("%d",n/2);
    } else {
        printf("%d",n/2+1);
    }
    return 0;
}
