#include <iostream>
using namespace std;

int main() {
    int sc;
    cin >> sc;
    if (sc >= 90 && sc <= 100) {
        cout << "A";
    } else if (sc >= 85 && sc <= 89) {
        cout << "B+";
    } else if (sc >= 80 && sc <= 84) {
        cout << "B";
    } else if (sc >= 75 && sc <= 79) {
        cout << "C+";
    } else if (sc >= 70 && sc <= 74) {
        cout << "C";
    } else if (sc >= 65 && sc <= 69) {
        cout << "D+";
    } else if (sc >= 60 && sc <= 64) {
        cout << "D";
    } else {
        cout << "F";
    }
    return 0;
}