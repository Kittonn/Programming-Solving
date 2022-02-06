#include <bits/stdc++.h>
#include <math.h>
using namespace std;

int main(){
    long n,s=0;
    cin >> n;
    for(int i=1;i<=n;i++){
        s+=pow(i,i);
    }
    cout << s;
    return 0;
}