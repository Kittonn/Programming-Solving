#include <iostream>
using namespace std;

int main() {
    int max = 0;
    for (int i = 0; i < 3; i++)
    {
        int x;
        cin >> x;
        if (x > max) {
            max = x;
        }
    }
    cout << "MAX : " << max;
    return 0;
}