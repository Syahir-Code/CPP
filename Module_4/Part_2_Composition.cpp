// https://algodaily.com/lessons/association-aggregation-composition-casting/cpp

// Vehicle.cpp
class Wheel  {

};

class Door {

};

class Seat {

};

class Vehicle {
    Wheel wheels[4];
    Door doors[4];
    Seat seats[4];

public:
    Vehicle() {
        for(int i = 0; i < 4; i++) {
            wheels[i] = Wheel();
            doors[i] = Door();
            seats[i] = Seat();
        }
    }

    void mode() {
        // Moving
    }
};

// main.cpp
int main() {
    // All the Wheel, Door and Seat will be created with Vehicle
    Vehicle vehicle;
    // Do something with Vehicle
    // The Wheel, Door, and Seat will be destroyed with the Vehicle when out of scope
    return 0;
}