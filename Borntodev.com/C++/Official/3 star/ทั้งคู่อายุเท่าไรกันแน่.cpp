#include <bits/stdc++.h>
using namespace std;

int main(){
    int n,m,y;
    cin >> n >>m>>y;
    int b=((m-1)*y+n)/(m-1);
    int a=n+b;
    cout << a  << " " << b;
    
    return 0;
}