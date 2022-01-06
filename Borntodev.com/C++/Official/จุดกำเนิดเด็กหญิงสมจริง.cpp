#include <iostream>
using namespace std;

int main() {
    int a = 6;
    for (int i = 1; i <= a; i++)
    {
        for (int k = 0; k < i; k++)
        {
            cout << "*";
        }
        cout << endl;
    }
    
    return 0;
}