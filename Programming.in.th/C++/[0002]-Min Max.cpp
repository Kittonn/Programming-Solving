#include <iostream>
using namespace std;

int main() {
    int M = -2000000000, m = 2000000000,n;
    cin >> n;
    for (int i = 0; i < n; i++){
        int x;
        cin >> x;
        if (x > M) {
            M = x;
        }
        if (x < m) {
            m = x;
        }
    }
    cout << m << endl << M;
    return 0;
}