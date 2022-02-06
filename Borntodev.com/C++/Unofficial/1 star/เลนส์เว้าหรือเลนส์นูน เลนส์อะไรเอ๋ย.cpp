#include <bits/stdc++.h>
using namespace std;
double len(double s, double y){
    return 1/((1/s)+(1/y));
}

int main(){
    double s,y;
    cin >> s >> y;
    if(len(s,y) > 0){
        cout << setprecision(2) << fixed << len(s,y) << " cm" << endl;
        cout << "เลนส์นูน";
    } else {
        cout << setprecision(2) << fixed << len(s,y) << " cm" << endl;
        cout << "เลนส์เว้า";
    }
    return 0;
}