#include <bits/stdc++.h>
using namespace std;

int main(){
    int arr[] = {31,28,31,30,31,30,31,31,30,31,30,31};
    int m,y;
    cin >> m >> y;
    y -= 543;
    if((y%4 == 0 && y % 100 != 0) || y % 400 == 0){
        arr[1] = 29;
    }
    cout << arr[m-1];
    return 0;
}