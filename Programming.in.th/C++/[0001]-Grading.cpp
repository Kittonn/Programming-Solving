#include <iostream>
using namespace std;

int main() {
    int a,b,c,t;
    cin >> a >> b >> c;
    t = a + b + c;
    if (t >= 80 && t <= 100){
        cout << "A";
    } else if (t >= 75 && t <= 79) {
        cout << "B+";
    } else if (t >= 70 && t <= 74) {
        cout << "B";
    } else if (t >= 65 && t<= 69) {
        cout << "C+";
    } else if (t >= 60 && t<= 64) {
        cout << "C";
    } else if (t >= 55 && t<=59) {
        cout << "D+";
    } else if (t >= 50 && t <= 54) {
        cout << "D";
    } else {
        cout << "F";
    }
    
    return 0;
}