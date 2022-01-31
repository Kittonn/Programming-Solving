#include <stdio.h>

int max_four(int a,int b,int c,int d) {
    int M = 0,arr[] = {a,b,c,d};
    for (int i = 0; i < 4; i++) {
        if (arr[i] > M) {
            M = arr[i];
        }
    }
    return M;
}

int main() {
    int a,b,c,d;
    scanf("%d %d %d %d",&a,&b,&c,&d);
    printf("%d",max_four(a,b,c,d));
    return 0;
}