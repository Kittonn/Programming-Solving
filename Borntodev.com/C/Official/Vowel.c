#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>

int main() {
    char n[100];
    scanf("%[^\n]%*c",&n);
    for(int i = 0; i<strlen(n);i++){
        if(n[i] == 'A' || n[i] == 'a' || n[i] == 'E' || n[i] == 'e' || n[i] == 'I' || n[i] == 'i' || n[i] == 'O' || n[i] == 'o' || n[i] == 'U' || n[i] == 'u'){
            continue;
        } else {
            printf("%c",n[i]);
        }
    }
    return 0;
}

