#include <bits/stdc++.h>
using namespace std;

int main(){
    int n;
    cin >> n;
    if(n%3 ==0 && n%2 ==0){
        cout << "FizzBuzz";
    } else if(n%3==0){
        cout << "Fizz";
    } else {
        cout << "Buzz";
    }
    return 0;
}
