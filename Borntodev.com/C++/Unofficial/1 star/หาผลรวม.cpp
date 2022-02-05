#include <bits/stdc++.h>
using namespace std;

int main(){
    long n,s=0;
    cin >> n;
    for(int i=2;i<=n;i+=2){
        s+=i*i;
    }
    cout << s;
    return 0;
}
