#include <stdio.h>

int main() {
    char txt[100];
    scanf("%[^\n]%*c", &txt);
    printf("Hello, World!\n%s",txt);
    return 0;
}