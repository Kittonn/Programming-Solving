#include <stdio.h>


int main() {
    int a,b;
    double c,d;
    scanf("%d %d",&a,&b);
    scanf("%lf %lf",&c,&d);
    printf("%d %d\n%.1lf %.1lf",a+b,a-b,c+d,c-d);
    return 0;
}