#include <iostream>
using namespace std;

int main() {
    int nums,M= -2000000000,m = 2000000000,num;
    cin >> nums;
    for (int i = 0; i < nums; i++)
    {
        cin >> num;
        if (num > M) {
            M = num;
        } 
        if (num < m) {
            m = num;
        }
    }
    cout << m << endl << M;

    return 0;
}