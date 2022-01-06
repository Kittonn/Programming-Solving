#include <iostream>
using namespace std;

int main() {
    float th,math,sci,eng,sport;
    cin >> th >> math >> eng >> sci >> sport;
    printf("THAI = %.1f\nMATH = %.1f\nENGLISH = %.1f\nSCIENCE = %.1f\nSPORT = %.1f",th,math,eng,sci,sport);
    cout << endl << "---" << endl;
    printf("GPA = %.1f",(th+math+sci+eng+sport)/5);
    return 0;
}