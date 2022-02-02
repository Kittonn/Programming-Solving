#include <bits/stdc++.h>
using namespace std;

int main(){
    float arr[5];
    for(int i=0;i<5;i++){
        cin >> arr[i];
    }
    printf("THAI = %.1f\n",arr[0]);
    printf("MATH = %.1f\n",arr[1]);
    printf("ENGLISH = %.1f\n",arr[2]);
    printf("SCIENCE = %.1f\n",arr[3]);
    printf("SPORT = %.1f\n",arr[4]);
    cout << "---" << endl;
    printf("GPA = %.1f",(arr[0]+arr[1]+arr[2]+arr[3]+arr[4])/5);    

    return 0;
}