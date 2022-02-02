#include <bits/stdc++.h>
using namespace std;

int main(){
    int M=0,a;
    for(int i=0;i<3;i++){
        cin >> a;
        if(a>M){
            M=a;
        }
    }
    cout << "MAX : " << M;

    return 0;
}