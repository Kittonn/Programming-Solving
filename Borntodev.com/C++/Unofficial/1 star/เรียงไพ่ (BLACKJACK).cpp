#include <bits/stdc++.h>
using namespace std;

int main(){
    char bl[] = {'A','2','3','4','5','6','7','8','9','J','Q','K'};
    string n;
    getline(cin,n);
    for(int i=0;i<sizeof(bl)/sizeof(bl[0]);i++){
        for(int j=0;j<n.length();j++){
            if(bl[i] == n[j]){
                cout << bl[i] << " ";
            }
        }
    }
    return 0;
}
