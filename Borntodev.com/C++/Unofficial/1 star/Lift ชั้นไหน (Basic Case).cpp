#include <bits/stdc++.h>
using namespace std;

int main(){
    int f;
    string nf[] = {"st","nd","rd","th","th"};
    cin >> f;
    if (f>5){
        cout << "Error! Not have this floor";
    } else {
        cout << "OK! Wait please" << endl;
        cout << "---------------" << endl;
        cout << "Lift is arriving!" << endl;
        cout << "---------------" << endl;
        cout << "Lift is going up!" << endl;
        cout << "---------------" << endl;
        cout << "Lift has reached the " << f <<nf[f-1]<< " floor!";
    }
    return 0;
}