#include <bits/stdc++.h>
using namespace std;

int main(){
    long a,b,c=1;
    cin >> a >> b;
    for(int i = 1;i<=b;i++){
        c*=a;
    }
    cout << c;
    return 0;
}