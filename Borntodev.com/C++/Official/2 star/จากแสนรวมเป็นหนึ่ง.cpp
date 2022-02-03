#include <bits/stdc++.h>
using namespace std;

int main(){
    string n;
    cin >> n;
    int s=0;
    while(n.length() != 1){
        for(int i=0;i<n.length();i++){
            int x = n[i];
            s+=x-48;
        }
        n = to_string(s);
        s = 0;
    }
    cout << n << endl;
    

    return 0;
}