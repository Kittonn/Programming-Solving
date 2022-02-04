#include <bits/stdc++.h>
using namespace std;

int main(){
    int a,n;
    cin >> a>>n;
    int arr1[n],arr2[n];
    string arr3[n];
    for(int i=0;i<n;i++){
        cin >> arr1[i] >> arr2[i] >> arr3[i];
    }
    for(int i=0;i <n;i++){
        if(a <= arr2[i] && a >= arr1[i]){
            cout << arr3[i];
            break;
        }
    }



    return 0;
}
