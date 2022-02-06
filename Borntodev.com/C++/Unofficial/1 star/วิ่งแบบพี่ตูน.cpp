#include <bits/stdc++.h>
using namespace std;

int main(){
    int d,r;
    cin >> r >> d;
    for(int i=1;i<=r;i++){
        cout << i << "-" << d << endl;
    }
    cout << d*r;
    return 0;
}