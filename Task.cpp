#include <iostream>
#include <string>

using namespace std;

// Forward declaration
class TemperatureSensor;

class SmartHomeSystem {
public:
    void activateGeyser();
};

class HomeOwner {
private:
    string name;
public:
    HomeOwner(string n) : name(n) {}
    string getName() { return name; }
};

class BathroomGeyser {
private:
    int heatingTemperature;
public:
    void calculateHeatingTemperature(TemperatureSensor& sensor);
    void setHeatingTemperature(int temp) { heatingTemperature = temp; }
    int getHeatingTemperature() { return heatingTemperature; }
};

class TemperatureSensor {
public:
    int getCurrentTemperature() { return 25; } // Example current temperature
};

class HeatingSystem {
public:
    int calculateRequiredTemperature(int currentTemp) {
        // Modify the calculation as per your requirements
        return currentTemp + 10; // Example modification
    }
};

void SmartHomeSystem::activateGeyser() {
    BathroomGeyser geyser;
    TemperatureSensor sensor;
    geyser.calculateHeatingTemperature(sensor);
    cout << "Heating temperature set to: " << geyser.getHeatingTemperature() << " degrees" << endl;
}

void BathroomGeyser::calculateHeatingTemperature(TemperatureSensor& sensor) {
    int currentTemp = sensor.getCurrentTemperature();
    HeatingSystem heatingSystem;
    int requiredTemp = heatingSystem.calculateRequiredTemperature(currentTemp);
    setHeatingTemperature(requiredTemp);
}

int main() {
    SmartHomeSystem system;
    system.activateGeyser();

    return 0;
}
