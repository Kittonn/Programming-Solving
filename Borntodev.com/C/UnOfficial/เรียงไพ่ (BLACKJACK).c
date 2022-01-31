#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>

int main() {
    char b[] = {'A','2','3','4','5','6','7','8','9','J','Q','K'};
    char txt[30];
    fgets(txt,30,stdin);
    
    for (int i = 0; i < sizeof(b) / sizeof(b[0]); i++){
        for (int j = 0; j < strlen(txt); j++) {
            if (b[i] == txt[j]) {
                printf("%c ",b[i]);
            }
        }
    }
    return 0;
}
