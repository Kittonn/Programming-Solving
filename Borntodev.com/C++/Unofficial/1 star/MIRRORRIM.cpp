#include <bits/stdc++.h>
using namespace std;

int main(){
    string name;
    getline(cin,name);
    cout << name;
    for(int i =name.length()-2;i>=0;i--){
        cout << name[i];
    }
    return 0;
}