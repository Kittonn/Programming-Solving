#include <bits/stdc++.h>
using namespace std;

int main(){
    int n,s=0;
    cin >> n;
    if (n <= 0){
        cout << "ไม่สามารถหาได้";
    } else {
        for(int i=2;i<=n;i++){
            bool tf = true;
            for(int j = 2;j<i;j++){
                if (i%j == 0){
                    tf =false;
                }
            }
            if (tf) {
                s+=1;
            }
        }
        cout << "จำนวนเฉพาะในช่วง 0 ถึง " << n << endl;
        cout << "มีอยู่ " << s << " จำนวน";
    }

    return 0;
}