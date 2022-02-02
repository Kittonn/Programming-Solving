#include <bits/stdc++.h>
using namespace std;

int main(){
    int a,b;
    cin >> a >> b;
    if(a>b){
        cout << "A";
    } else if(b>a){
        cout << "B";
    } else {
        cout <<"AB";
    }
    return 0;
}