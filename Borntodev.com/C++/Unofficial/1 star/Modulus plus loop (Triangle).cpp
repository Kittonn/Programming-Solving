#include <bits/stdc++.h>
using namespace std;

int main(){
    int n;
    cin >> n;
    for(int i =0;i<n-1;i++){
        for(int j=0;j<=i;j++){
            cout << i+1;
        }
        cout << endl;
    }
    return 0;
}
