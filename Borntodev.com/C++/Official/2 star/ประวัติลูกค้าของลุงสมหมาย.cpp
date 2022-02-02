#include <bits/stdc++.h>
using namespace std;

int main(){
    string name,lname,add,gen,tel;
    getline(cin,name);    
    getline(cin,lname);
    getline(cin,add);
    getline(cin,gen);
    getline(cin,tel);
    cout << "--- Customer Detail ---"<<endl;
    cout << "Name : " << name << " " << lname << endl;    
    cout << "Address : " << add << endl;
    cout << "Gender : " << gen << endl;
    cout << "Tel : " << tel << endl;

    

    return 0;
}