#include <stdio.h>

int main() {
    int n = 5;
    for (int i=1;i <= n;i++){
        for (int k = 0; k < i; k++)
        {
            printf("*");
        }
        printf("\n");
    }
    for (int i = 1; i <= n-1; i++)
    {
        for (int j = 1; j <= n-i; j++)
        {
            printf("*");
        }
        printf("\n");
    }
    
    
    return 0;
}