#include <stdio.h>
#include <stdlib.h>
#include <string.h>

double fac(double n) {
    if(n<=1){
        return 1;
    } else {
        return n * fac(n-1);
    }
}

int main() {
    double n,ans;
    scanf("%lf", &n);
    ans = fac(n);
    printf("%.0lf", ans);
    
    return 0;
}

