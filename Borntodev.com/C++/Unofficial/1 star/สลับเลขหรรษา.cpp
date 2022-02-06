#include <bits/stdc++.h>
using namespace std;

int main(){
    string a,o,b;
    cin >> a >> o >> b;
    reverse(a.begin(),a.end());
    reverse(b.begin(),b.end());
    int a1,b1;
    a1 = stoi(a);
    b1 = stoi(b);
    cout << a << " + " << b << " = " << a1+b1;
    return 0;
}