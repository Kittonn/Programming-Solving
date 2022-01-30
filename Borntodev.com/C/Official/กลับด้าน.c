#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>

int main() {
    char n[100];
    scanf("%[^\n]%*c",&n);
    printf("%s",strrev(n));

    return 0;
}

