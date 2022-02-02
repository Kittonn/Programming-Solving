#include <bits/stdc++.h>
using namespace std;

int main(){
    int n;
    cin >> n;
    if(n>1){
        for(int i=0;i<n;i++){
            cout << "#";
        }
        cout << endl;
        for(int i=0;i<n-2;i++){
            cout  << "#";
            for(int j=0;j<n-2;j++){
            cout << " ";
            }
            cout << "#" << endl;
        }
        for(int i=0;i<n;i++){
            cout << "#";
        }
    } else {
        cout << "#";
    }
    return 0;
}