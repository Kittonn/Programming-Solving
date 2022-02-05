#include <bits/stdc++.h>
using namespace std;

int main(){
    string t1,t2;
    getline(cin,t1);
    getline(cin,t2);
    if(t1.length() > t2.length()){
        cout << t1.length() << endl << t2.length();
    } else {
        cout << t2.length() << endl << t1.length();
    }
    return 0;
}
