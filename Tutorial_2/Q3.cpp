#include <iostream>
using namespace std;
void drawBox (int w);
void drawFullLine(int w);
void drawEmptyLine (int w);

void prompt () {
    cout << "Enter the side of the square box (1-16)";
}

void ending () {
    cout << "Ending  program. Only integer values between 1 and 16 accepted\n" 
    << endl;
}

int main () {
    int width;
    cout << "\n";
    prompt ();
    cout << "\n<any other value to end>: ";
    cin >> width;

    if (width<1 || width>16) {
        ending();
    }

    else {
        do {
            drawBox(width);

            prompt();
            cout << ": ";
            cin >> width;

        } while (width>=1 && width<=16);

        ending();
    } 

    return 0;
}

void drawBox (int w) {
    drawFullLine (w);
    if (w!=1) {
        for (int i=1; i<=(w-2); i++){
            drawEmptyLine (w);
        }  
        drawFullLine (w);
    }
}

void drawFullLine (int w) {
    for (int i=1; i<=w; i++) {
        cout << "*  ";
    } cout << "\n";
}

void drawEmptyLine (int w) {
    w-=2; 

    if (w>0) {
        cout << "*  ";
        for (int i=1; i<=w; i++) {
            cout << "   ";
        } cout << "*\n";
    }

}