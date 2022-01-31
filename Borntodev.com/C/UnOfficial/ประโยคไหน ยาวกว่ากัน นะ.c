#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>

int main() {
    char txt1[100],txt2[100];
    scanf("%[^\n]%*c %[^\n]%*c",&txt1,&txt2);
    if (strlen(txt1) >= strlen(txt2)) {
        printf("%d\n%d",strlen(txt1),strlen(txt2));
    } else {
        printf("%d\n%d",strlen(txt2),strlen(txt1));
    }



    return 0;
}

