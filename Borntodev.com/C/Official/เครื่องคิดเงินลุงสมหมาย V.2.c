#include <stdio.h>
#include <stdlib.h>

int main() {
    int c,n,sum=0;
    scanf("%d",&n);
    for(int i = 0; i<n;i++){
        scanf("%d",&c);
        sum+=c;
    }
    printf("%d THB",sum);
    return 0;
}

