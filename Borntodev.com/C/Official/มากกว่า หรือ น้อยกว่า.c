#include <stdio.h>

int main() {
    int a,b;
    int M = 0,m = 100;
    scanf("%d",&a);
    scanf("%d",&b);
    if (a>b){
        printf("MAX : %d\n",a);
        printf("MIN : %d",b);
    } else {
        printf("MAX : %d\n",b);
        printf("MIN : %d",a);
    }
    
    return 0;
}