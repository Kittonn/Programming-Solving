#include <bits/stdc++.h>
using namespace std;

int main(){
    
    string txt;
    getline(cin,txt);
    for(int i=0;i<txt.length();i++){
        char x = tolower(txt[i]);
        if(x=='a'|| x == 'e' || x == 'i' || x =='o' || x=='u'){
            continue;
        } else {
            cout << txt[i];
        }
    }
    return 0;
}