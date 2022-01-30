#include <stdio.h>
#include <stdlib.h>

int main() {
    int M = 0,num;
    for (int i = 0; i < 3; i++) {
        scanf("%d", &num);
        if (num > M) {
            M = num;
        }
    }

    printf("MAX : %d",M);
    return 0;
}

