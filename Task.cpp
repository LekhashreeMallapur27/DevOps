#include <iostream>
#include <string>

using namespace std;

class HomeOwner {
private:
    string name;
public:
    HomeOwner(string n) : name(n) {}
    string getName() { return name; }
};

class SmartGeyser {
private:
    bool isActive;
public:
    SmartGeyser() : isActive(false) {}
    void activateGeyser() { isActive = true; }
    bool isGeyserActive() { return isActive; }
};

class EnvironmentSensor {
private:
    int currentTemperature;
public:
    EnvironmentSensor(int temp) : currentTemperature(temp) {}
    int getCurrentTemperature() { return currentTemperature; }
};

class WaterHeater {
private:
    int heatingTemperature;
public:
    WaterHeater() : heatingTemperature(0) {}
    void setHeatingTemperature(int temp) { heatingTemperature = temp; }
    int getHeatingTemperature() { return heatingTemperature; }
};

int main() {
    // Creating objects
    HomeOwner owner("John");
    SmartGeyser geyser;
    EnvironmentSensor sensor(25);
    WaterHeater heater;

    // Activating geyser
    geyser.activateGeyser();

    // Getting current temperature and setting heating temperature
    int currentTemp = sensor.getCurrentTemperature();
    heater.setHeatingTemperature(currentTemp + 10);

    // Displaying information
    cout << "Geyser active: " << geyser.isGeyserActive() << endl;
    cout << "Heating temperature set to: " << heater.getHeatingTemperature() << " degrees" << endl;

    return 0;
}
