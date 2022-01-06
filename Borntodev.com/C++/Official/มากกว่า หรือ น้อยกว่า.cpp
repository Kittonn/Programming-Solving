#include <iostream>
using namespace std;

int main() {
    int a,b;
    cin >> a >> b;
    if (a > b) {
        cout << "MAX : " << a << endl << "MIN : " << b;
    }
    else {
        cout << "MAX : " << b << endl << "MIN : " << a;
    }
    return 0;
}