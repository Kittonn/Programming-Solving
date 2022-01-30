#include <stdio.h>
#include <stdlib.h>

int main() {
    double gpa[5];
    for(int i =0;i<5;i++) {
        scanf("%lf",&gpa[i]);
    }
    printf("THAI = %.1lf\nMATH = %.1lf\nENGLISH = %.1lf\nSCIENCE = %.1lf\nSPORT = %.1lf\n",gpa[0],gpa[1],gpa[2],gpa[3],gpa[4]);
    printf("---\n");
    printf("GPA = %.1lf",(gpa[0]+gpa[1]+gpa[2]+gpa[3]+gpa[4])/5);
    return 0;
}

