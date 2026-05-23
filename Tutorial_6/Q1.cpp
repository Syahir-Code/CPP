#include <iostream>
#include <fstream>
#include <string>
using namespace std;

class SPowerData {
    public:
    float m_Amp;
    float m_Res;
    float m_Power;
};

class CPowerInfo {
    private:
    //
    SPowerData *m_power_array; // why pointer ? to store array of struct variables
    fstream m_File;
    int numElem;

    public:
    // member functions based on question
    void LoadData(string pFile, int numElements) {
        m_File.open(pFile);
        cout << "\n Total elements :" << numElements;
        float d1, d2;

        for (int i = 0; i < numElements; i++) {
            m_File >> d1;
            m_File >> d2;
            cout << "\n" << d1 << "\t" << d2;
        }
       
        m_File.close();
    }
    //
};

int main() {
    cout << "Test program!" << endl;
    CPowerInfo c1;
    c1.LoadData("AmpRes.txt", 7);
    return 1;
}