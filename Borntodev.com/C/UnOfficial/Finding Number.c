#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>

int main() {
    int n,f,c=0;
    scanf("%d",&n);
    int arr[n];
    for(int i = 0; i<n;i++){
        scanf("%d",&arr[i]);
    }
    scanf("%d",&f);
    for (int i = 0;i<n;i++){
        if (f == arr[i]) {
            c= 1;
        } 
    }
    if(c == 1){
        printf("Yes");
    } else {
        printf("No");
    }
    
    return 0;
}