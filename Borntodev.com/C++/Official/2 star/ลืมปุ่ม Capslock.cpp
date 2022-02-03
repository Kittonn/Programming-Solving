#include <bits/stdc++.h>
using namespace std;

int main(){
    
    string txt;
    getline(cin,txt);
    for(int i=0;i<txt.length();i++){
        if(isupper(txt[i])){
            cout << (char) tolower(txt[i]);
        } else {
            cout << (char) toupper(txt[i]);
        }
    }
    

    return 0;
}