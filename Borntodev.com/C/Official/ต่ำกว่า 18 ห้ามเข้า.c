#include <stdio.h>
#include <stdlib.h>

int main() {
    int y;
    char name[20],lname[20];
    
    scanf("%s %s %d",&name,&lname,&y);
    if (2020-y >= 18) {
        printf("Welcome %s %s to NongGipsy Pub",name,lname);
    } else {
        printf("You shall not pass!");
    }
    

    return 0;
}

