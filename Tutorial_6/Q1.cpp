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
    void loadData(string pFile, int numElements) {
        m_power_array = new  SPowerData[numElements];
        m_File.open(pFile);

        for (int i = 0; i < numElements; i++) {
            m_File >> m_power_array[i].m_Amp;
            m_File >> m_power_array[i].m_Res;
            m_power_array[i].m_Power = (m_power_array[i].m_Amp)*
                                       (m_power_array[i].m_Amp)*
                                       (m_power_array[i].m_Res);
        }

        m_File.close();
    }
    
    int getNumElements (string pFile) {
        int counter=0;
        float amp, res;
        m_File.open (pFile);

        while (m_File >> amp >> res) {
            counter++;
        }

        m_File.close();
        numElem = counter;

        return counter;
    }

    void FindMinMaxPower (float &outMinPower, float &outMaxPower) {
        outMinPower = 10000;
        outMaxPower = 0;

        for (int i=0; i<numElem; i++) {

            if (m_power_array[i].m_Power > outMaxPower)
            outMaxPower = m_power_array[i].m_Power;

            else if (m_power_array[i].m_Power < outMinPower)
            outMinPower = m_power_array[i].m_Power;
        }
    }

};

int main() {
    CPowerInfo pw;
    int numElements = pw.getNumElements("AmpRes.txt");
    pw.loadData("AmpRes.txt", numElements);
    float minpower, maxpower;
    pw.FindMinMaxPower(minpower, maxpower);
    cout << "\n The minimum power = " << minpower;
    cout << "\n The maximum power = " << maxpower;
    cout << endl;

    return 1;
}