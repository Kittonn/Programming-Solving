#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>

int main() {
    int n;
    scanf("%d",&n);
    if (n <= 2) {
        printf("Box's height must be more than 2");
    } else {
        for (int i =0; i<n;i++){
            printf("#");
        }
        printf("\n");
        for(int i = 0;i < n-2;i++){
            printf("#");
            for(int j = 0; j<n-2;j++){
                printf(" ");
            }
            printf("#\n");
        }
        for (int i =0; i<n;i++){
            printf("#");
        }
    }
    return 0;
}
