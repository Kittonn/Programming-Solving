#include <bits/stdc++.h>
using namespace std;

int main(){
    int a,b,c,d,e,f;
    cin >> a>>b>>c>>d>>e>>f;
    cout << a*c*e << " ";
    cout << (a*d*e) + (b*c*e) +(a*c*f) << " ";
    cout << (b*d*e) + (a*d*f) +(b*c*f) << " ";
    cout << b*d*f;
    return 0;
}