#include <bits/stdc++.h>
using namespace std;

int main(){
    int lucky[] = {8,14,112,76,2};
    int s=0;
    for(int i=0;i<5;i++){
        int n;
        cin >> n;
        for(int j=0;j<5;j++){
            if (n == lucky[j]){
                s++;
            }
        }
    }
    if(s>=3){
        cout << "You are lucky";
    } else {
        cout << "You are unlucky";
    }
    return 0;
}