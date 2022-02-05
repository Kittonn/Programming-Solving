#include <bits/stdc++.h>
using namespace std;

int main(){
    int n,f;
    cin >> n;
    int arr[n];
    for(int i=0;i<n;i++){
        cin >> arr[i];
    }
    cin >> f;
    bool t=false;
    for(int i=0;i<n;i++){
        if(arr[i] == f){
            t=true;
        }
    }
    if(t){
        cout << "Yes";
    } else {
        cout << "No";
    }
    return 0;
}
