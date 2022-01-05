#include <iostream>
using namespace std;

int main() {
  int hw,mid,final,tot;
  cin >> hw >> mid >> final;
  tot = hw + mid + final;
  if (tot >= 80 && tot <= 100)
  {
    cout << "A";
  }
  else if (tot >= 75 && tot <= 79)
  {
    cout << "B+";
  }
  else if (tot >= 70 && tot <= 74)
  {
    cout << "B";
  }
  else if (tot >= 65 && tot <= 69)
  {
    cout << "C+";
  }
  else if (tot >= 60 && tot <= 64)
  {
    cout << "C";
  }
  else if (tot >= 55 && tot <= 59)
  {
    cout << "D+";
  }
  else if (tot >= 50 && tot <= 54)
  {
    cout << "D";
  }
  else
  {
    cout << "F";
  }
  
  return 0;
}