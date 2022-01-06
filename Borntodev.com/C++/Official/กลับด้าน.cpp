#include <iostream>
using namespace std;

int main() {
    string txt;
    cin >> txt;
    for (int i = txt.length(); i > 0; i--)
    {
        cout << txt[i-1];
    }
    
    return 0;
}