#include <iostream>
using namespace std;

int main() {
    int x,y,c;
    cin >> x >> y;
    c=x;
    for (int i = 1; i <= y-1; i++)
    {
        x*=c;
    }
    cout << x;
    return 0;
}