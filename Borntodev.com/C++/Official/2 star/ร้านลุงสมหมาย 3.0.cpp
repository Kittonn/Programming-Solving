#include <bits/stdc++.h>
using namespace std;

int main(){
    int n;
    cin >> n;
    string name[n], gen[n];
    int y[n];
    cin.ignore();
    for(int i = 0;i<n;i++){
        getline(cin,name[i]);
        cin >> y[i];
        cin >> gen[i];
        cin.ignore();
    }
    cout << "--Customers Information--" << endl;
    for(int i =0;i<n;i++){
        cout << name[i] << " (age : " << 2017 - y[i] << ")" << endl;
    }


    return 0;
}