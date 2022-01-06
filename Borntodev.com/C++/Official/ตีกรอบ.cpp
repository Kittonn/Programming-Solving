#include <iostream>
using namespace std;

int main() {
    int num;
    cin >> num;
    if (num == 1)
    {
        cout << "#";
    } 
    else 
    {
        for (int i = 0; i < num; i++)
        {
            cout << "#";
        }
        cout << endl;
        for (int i = 0; i < num-2; i++)
        {
            cout << "#";
            for (int j = 0; j < num-2; j++)
            {
                cout << " ";
            }

            cout << "#";
            cout << endl;
        }
        for (int i = 0; i < num; i++)
        {
            cout << "#";
        }
    }
    
    
    return 0;
}