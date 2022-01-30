#include <stdio.h>
#include <stdlib.h>

int main() {
    int sc;
    scanf("%d",&sc);
    if (sc >= 90 && sc <= 100) {
        printf("A");
    } else if (sc >= 85 && sc <= 89) {
        printf("B+");
    } else if (sc >= 80 && sc <= 84) {
        printf("B");
    } else if (sc >= 75 && sc <= 79) {
        printf("C+");
    } else if (sc >= 70 && sc <= 74) {
        printf("C");
    } else if (sc >= 65 && sc <= 69) {
        printf("D+");
    } else if (sc >= 60 && sc <= 64) {
        printf("D");
    } else if (sc >100) {
        printf("Error : Value must be less than or equal to 100.");
    } else if (sc < 0) {
        printf("Error : Value must be greater than or equal to 0.");
    } else {
        printf("F");
    }
    return 0;
}