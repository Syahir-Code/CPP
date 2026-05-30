#include  <iostream>
using namespace std;

// use reference variable as argument
void swap (int &num1, int &num2);
void swap_v2 (int *num1, int *num2);

int main () {
    int x = 2, y = 4;

    cout << "\n Before swapping";
    cout << "\n x = " << x;
    cout << "\n y = " << y << endl;
    
    swap(x, y);
    cout << "\n After swapping using swap()";
    cout << "\n x = " << x;
    cout << "\n y = " << y;

    swap_v2(&x, &y);
    cout << "\n\n After swapping again using swap_v2()";
    cout << "\n x = " << x;
    cout << "\n y = " << y << "\n\n";
  return 0;
}

void swap (int &num1, int &num2) {
    int temp = num1;
    num1 = num2;
    num2 = temp;
}

void swap_v2 (int *num1, int *num2) {
  int temp = *num1;
  *num1 = *num2;
  *num2 = temp;
}