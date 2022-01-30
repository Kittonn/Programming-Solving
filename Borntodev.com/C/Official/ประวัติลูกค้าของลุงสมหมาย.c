#include <stdio.h>
#include <stdlib.h>

int main() {
    char name[20],lname[20],add[20],gen[20],tel[20];
    scanf("%s %s %[^\n]%*c %s %s",&name,&lname,&add,&gen,&tel);
    printf("--- Customer Detail ---\n");
    printf("Name : %s %s",name,lname);
    printf("\nAddress : %s",add);
    printf("\nGender : %s",gen);
    printf("\nTel : %s",tel);
    return 0;
}

