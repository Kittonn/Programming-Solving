#include <bits/stdc++.h>
#include <cmath>
using namespace std;

int main(){
    int n;
    cin >> n;
    if( n%5==0){
        cout << n/5;
    } else {
        cout << n/5+1;
    }
    return 0;
}
