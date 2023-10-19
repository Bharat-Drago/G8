#include <iostream>
using namespace std;

class Vehicle {
protected:
    int id;
    int maxSpeed;
public:
    Vehicle(int id, int maxSpeed) : id(id), maxSpeed(maxSpeed) {}

    virtual double calculateTime(int distance) {
        return static_cast<double>(distance) / maxSpeed;
    }
};

class Car : public Vehicle {
private:
    int numDoors;
public:
    Car(int id, int maxSpeed, int numDoors) : Vehicle(id, maxSpeed), numDoors(numDoors) {}

    double calculateTime(int distance) override {
        double effectiveSpeed = 0.8 * maxSpeed; // cars travel at 80% of their max speed
        return (double)(distance) / effectiveSpeed;
    }
};

class Bike : public Vehicle {
private:
    bool hasGear;
public:
    Bike(int id, int maxSpeed, bool hasGear) : Vehicle(id, maxSpeed), hasGear(hasGear) {}

    double calculateTime(int distance) override {
        return (double)(distance) / maxSpeed;
    }
};

int main() {
    int distance;
    cin>>distance;
    int id_c,speed_c,numDoors;
    cin>>id_c>>speed_c>>numDoors;
    int id_b,speed_b;
    bool gear;
    cin>>gear;

    Car car1(id_c,speed_c, numDoors);
    Bike bike1(id_b,speed_b,gear);

    ; // distance to be covered in kilometers

    // Calculate time taken by each vehicle to cover the distance
    double carTime = car1.calculateTime(distance);
    double bikeTime = bike1.calculateTime(distance);

    // Output the results
    cout << "Time taken by Car: " << carTime << " hours" << endl;
    cout << "Time taken by Bike: " << bikeTime << " hours" << endl;

    return 0;
}
