#include <iostream>
#include <vector>
using namespace std;

void getInputIntoVector(float *a_array, int numElem);
void displayVector (float *a_array, int numElem);

int main () {
    float *A;

    int amount;
    cout << "Enter how many numbers to enter >> ";
    cin >> amount;

    getInputIntoVector (*A, amount);
    displayVector (*A, amount);

    return 0;
}

void getInputIntoVector(float *a_array, int numElem) {
    *a_array = new float [numElem];

    for (int i=0; i<numElem; i++) {
        printf ("Enter element A[%d]", i);
        cin >> a_array[i];
    }

    cout << "Number of elements in array = " << numElem << endl;

    delete [] a_array;
}

void displayVector (float *a_array, int numElem) {
    cout << "Display data in array" << endl;
    for (int i=0; i<numElem; i++) {
        cout << a_array[i] << " " << endl;
    }
}