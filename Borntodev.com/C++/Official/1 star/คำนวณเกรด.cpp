#include <bits/stdc++.h>
using namespace std;

int main(){
    int a;
    cin >> a;
    if(a >= 80 && a <= 100){
        cout << "A";
    } else if(a <= 79 && a >= 70){
        cout << "B";
    } else if(a >= 60 && a <= 69){
        cout << "C";
    } else if(a >= 50 && a <= 59){
        cout << "D";
    } else {
        cout << "F";
    }
    return 0;
}