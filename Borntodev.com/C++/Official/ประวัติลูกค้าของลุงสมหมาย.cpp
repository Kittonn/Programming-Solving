#include <iostream>
using namespace std;

int main() {
    string fn,ln,add,gd,tel;
    getline(cin,fn);
    getline(cin,ln);
    getline(cin,add);
    getline(cin,gd);
    getline(cin,tel);
    cout << "--- Customer Detail ---" << endl << "Name : " << fn+ " "+ln << endl << "Address : " << add << endl << "Gender : " << gd << endl << "Tel : " << tel;
    return 0;
}