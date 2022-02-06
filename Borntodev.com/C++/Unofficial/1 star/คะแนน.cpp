#include <bits/stdc++.h>
using namespace std;

int main(){
    int n;
    cin >> n;
    if (n >= 76 && n <= 100){
        cout << "excellent";
    } else if(n >= 51 && n <= 75){
        cout << "very good";
    } else if(n >= 26 && n <= 50){
        cout << "good";
    } else {
        cout << "fail";
    }
    return 0;
}