
#include <iostream>
#include <string>
using namespace std;

class Animal {
    private:
        double aWeight=0;
        string aSpecies;
        string aCommonName;
        static int numOfAnimal;

    public:
        Animal(string inSpecies, string inName) {
            numOfAnimal++;
            aSpecies = inSpecies;
            aCommonName = inName;
            cout << "\n Number of animal created = " << numOfAnimal;
        }

        string getSpecies() { 
            return aSpecies; 
        }

        void setWeight (double inWeight);
};

void Animal::setWeight (double inWeight) {
    aWeight = inWeight;
}

int Animal::numOfAnimal = 0; // no error

//no error in main()
int main(void) {
    Animal alienAnimal("Elephas Maximus", "Asian Elephant");
    alienAnimal.setWeight(2000.0);

    cout << "\nElephant is of the type " << alienAnimal.getSpecies()
    << endl;
}