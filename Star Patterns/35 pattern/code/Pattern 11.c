/* 
*****
 *****
  *****
   *****
    *****
*/

#include <stdio.h>

int main() {
    int n = 5;
    for (int i=1;i <= n;i++){
        for (int j = 0; j < i-1; j++)
        {
            printf(" ");
        }
        for (int k = 0; k < n; k++)
        {
            printf("*");
        }
        
        
        
        printf("\n");
    }
    return 0;
}