#include <stdio.h>
#include <stdlib.h>


int main() {

    int sc;
    scanf("%d",&sc);
    if (sc >= 80 && sc <= 100) {
        printf("A");
    } else if (sc >= 70 && sc <= 79) {
        printf("B");
    } else if (sc >= 60 && sc <= 69) {
        printf("C");
    } else if (sc >= 50 && sc <= 59) {
        printf("D");
    } else {
        printf("F");
    }

    return 0;
}

