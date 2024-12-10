#include <iostream>
#include <string>
using namespace std;

class Car {
public:
    string brand;
    string model;
    
    void displayInfo() {
        cout << "This car is " << brand <<  " with model " << model << endl;
    }
};

int main() {
    Car car1;
    car1.brand = "Porche";
    car1.model = "356 a";
    car1.displayInfo();

    return 0;
}