#include <iostream>
using namespace std;

int main() {
    string name;
    int year;
    getline(cin,name);
    cin >> year;
    year = 2020-year;
    if (year >= 18) {
        cout << "Welcome " << name << " to NongGipsy Pub";
    } else {
        cout << "You shall not pass!";
    }
    
    return 0;
}