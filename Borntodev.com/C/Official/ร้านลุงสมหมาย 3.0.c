#include <stdio.h>
#include <string.h>

struct person {
    char name[50];
    char lname[50];
    int year;
    char gender[10];
};

int main() {
    
    int n;
    scanf("%d",&n);
    struct person cus[n];
    for(int i = 0; i < n; i++){
        scanf("%s %s",cus[i].name,cus[i].lname);
        scanf("%d",&cus[i].year);
        scanf("%s",cus[i].gender);
    }
    printf("--Customers Information--\n");
    for(int i = 0; i <n;i++){
        printf("%s %s (age : %d)\n",cus[i].name,cus[i].lname,2017-cus[i].year);
    }
    return 0;
}