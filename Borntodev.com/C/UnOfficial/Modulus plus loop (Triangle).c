#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>

int main() {
    int n;
    scanf("%d",&n);
    for(int i = 1; i < n; i++){
        for (int j = 0; j < i; j++){
            printf("%d",i);
        }
        printf("\n");
    }
    return 0;
}
