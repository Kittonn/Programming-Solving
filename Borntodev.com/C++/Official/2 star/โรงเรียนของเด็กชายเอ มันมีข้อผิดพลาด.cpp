#include <bits/stdc++.h>
using namespace std;

int main(){
    int g;
    cin >> g;
    if(g >= 90 && g <= 100) {
        cout << "A";
    } else if(g >=85 && g <= 89){
        cout << "B+";
    } else if(g >= 80 && g <= 84){
        cout << "B";
    } else if(g >= 75 && g <= 79){
        cout << "C+";
    } else if(g >= 70 && g <= 74){
        cout << "C";
    } else if(g >= 65 && g <= 69){
        cout << "D+";
    } else if(g >= 60 && g <= 64){
        cout << "D";
    } else if(g> 100) {
        cout << "Error : Value must be less than or equal to 100.";
    } else if(g<0) {
        cout << "Error : Value must be greater than or equal to 0.";
    } else {
        cout << "F";
    }

    return 0;
}