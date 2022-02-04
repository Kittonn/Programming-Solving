#include <bits/stdc++.h>
using namespace std;

int main(){
    int n;
    cin >> n;
    int arr[n];
    for(int i=0;i<n;i++){
        cin >> arr[i];
    }
    sort(arr,arr + sizeof(arr) / sizeof(arr[0]),greater<int>());
    for(int i =0;i<n;i++){
        cout << arr[i] << endl;
    }

    return 0;
}
