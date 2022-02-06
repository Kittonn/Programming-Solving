#include <bits/stdc++.h>
#include <math.h>
using namespace std;

int main(){
    double w,h;
    cin >> w >> h;
    double bmi = w/(pow(h/100,2));
    cout << setprecision(2) << fixed << bmi << endl;
    if (bmi > 30) {
        cout << "Fat Level 3";
    } else if(bmi >= 25 && bmi <= 29){
        cout << "Fat Level 2";
    } else if(bmi >= 23 && bmi <= 24){
        cout << "Fat Level 1";
    } else if(bmi >= 18 && bmi <= 22){
        cout << "Good Health";
    } else {
        cout << "Thin";
    }
    return 0;
}