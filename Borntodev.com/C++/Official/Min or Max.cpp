#include <iostream>
using namespace std;

int main() {
    int a,b;
    cin >> a >> b;
    if (a > b) {
        cout << "A";
    } else if (a < b)
    {
        cout << "B";
    } else
    {
        cout << "AB";
    }
    
    
    return 0;
}