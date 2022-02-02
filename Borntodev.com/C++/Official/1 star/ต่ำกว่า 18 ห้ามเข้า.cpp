#include <bits/stdc++.h>
using namespace std;

int main(){
    string name;
    int y;
    getline(cin,name);
    cin >> y;
    if (2020-y >= 18) {
        cout << "Welcome "<<name<<" to NongGipsy Pub";
    } else {
        cout << "You shall not pass!";
    }
    return 0;
}