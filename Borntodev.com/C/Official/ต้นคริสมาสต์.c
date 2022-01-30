#include <stdio.h>
#include <stdlib.h>
#include <string.h>
/*
  *
 ***
  *
 ***
*****
  |
==V==  */

int main() {
    int n;
    scanf("%d",&n);
    for(int i = 0; i < n; i++){
        for(int j = 1;j<=i+2;j++){
            for(int k = 1; k<=n-j+1;k++) {
                printf(" ");
            }
            for(int m = 1; m <= j*2-1;m++){
                printf("*");
            }
            printf("\n");
        }
    }
    for(int i = 1; i<=n;i++){
        printf(" ");
    }
    printf("|\n");
    for(int i = 1; i<=n;i++){
        printf("=");
    }
    printf("V");
    for(int i = 1; i<=n;i++){
        printf("=");
    }
    return 0;
}

