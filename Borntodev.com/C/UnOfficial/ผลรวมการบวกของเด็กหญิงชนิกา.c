#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>

int main() {
    int a,s = 0;
    scanf("%d",&a);
    for (int i =1; i<=a;i++) {
        s+=i;
    }
    printf("%d",s);
    
    return 0;
}
