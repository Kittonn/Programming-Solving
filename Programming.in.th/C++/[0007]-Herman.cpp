#include <iostream>
#include <cmath> 
using namespace std;
/*pir^2 2r^2*/
int main() {
    int r;
    cin >> r;
    printf("%.6f\n%.6f",M_PI*pow(r,2),2*pow(r,2));
    return 0;
}