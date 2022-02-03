#include <bits/stdc++.h>
using namespace std;

int main(){
    long s=1,n;
    cin >> n;
    for(int i =1;i<=n;i++){
        s*=i;
    }
    cout << s;

    return 0;
}