#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>

int main() {
    char n[50];
    scanf("%[^\n]%*c",&n);
    for(int i = 0; i<strlen(n);i++){
        if(islower(n[i])){
            printf("%c",toupper(n[i]));
        } else {
            printf("%c",tolower(n[i]));
        }
    }
    return 0;
}

