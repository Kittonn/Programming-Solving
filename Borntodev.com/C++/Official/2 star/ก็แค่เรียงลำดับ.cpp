#include <bits/stdc++.h>
using namespace std;

int main(){
    int arr[5];
    for(int i=0;i<5;i++){
        cin >> arr[i];
    }
    sort(arr,arr + sizeof(arr) / sizeof(arr[0]),greater<int>());
    for(int i =0;i<5;i++){
        cout << arr[i] << endl;
    }

    return 0;
}
