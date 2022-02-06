#include <bits/stdc++.h>
using namespace std;

int main(){
    string name;
    getline(cin,name);
    for(int i=0;i<name.length();i++){
        if(isupper(name[i])){
            cout <<(char) tolower(name[i]);
        } else {
            cout << (char) toupper(name[i]);
        }
    }
    return 0;
}