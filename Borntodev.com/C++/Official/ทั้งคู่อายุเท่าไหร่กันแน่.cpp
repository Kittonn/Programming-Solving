#include <iostream>
using namespace std;

int main() {
    int n,m,y;
    cin >> n >> m >> y;
    cout<< n+((m-1)*y+n) / (m-1)<< " " << ((m-1)*y+n) / (m-1); 
    
    return 0;
}