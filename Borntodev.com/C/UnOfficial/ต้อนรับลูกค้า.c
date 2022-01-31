#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>

int main() {
    char name[50];
    fgets(name,50,stdin);
    printf("สวัสดีครับ คุณ %s",name);
    return 0;
}
