#include <bits/stdc++.h>
#include <math.h>
using namespace std;

int main(){
    int n,s=0;
    cin >> n;
    for(int i=1;i<=n;i++){
        s+= pow(i,5);
    }
    cout << s;
    return 0;
}