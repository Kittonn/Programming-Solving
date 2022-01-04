#include <stdio.h>

int main() {
    int a,b;
    scanf("%d",&a);
    scanf("%d",&b);
    if (a > b){
        printf("A");
    } else if (b > a) {
        printf("B");
    } else{
        printf("AB");
    }
    
    return 0;
}