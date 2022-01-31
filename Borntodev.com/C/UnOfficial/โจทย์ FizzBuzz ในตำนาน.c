#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>

int main() {
    int n;
    scanf("%d",&n);
    if (n % 3 == 0 && n % 2 != 0) {
        printf("Fizz");
    } else if (n % 2==0 && n % 3 != 0){
        printf("Buzz");
    } else {
        printf("FizzBuzz");
    }



    return 0;
}

