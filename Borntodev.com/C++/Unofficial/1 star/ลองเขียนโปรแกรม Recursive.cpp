#include <bits/stdc++.h>
using namespace std;

int re(int n){
    if(n==0){
        return 1;
    } else if(n < 0){
        return -1;
    }
    return re(n-1) +100;
}


int main(){
    int n;
    cin >> n;
    cout << re(n);
    return 0;
}
