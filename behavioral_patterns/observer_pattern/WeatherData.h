#ifndef WEATHERDATA
#define WEATHERDATA

#include <vector>

#include "Subject.h"
#include "Observer.h"

class WeatherData : public Subject {
private:
    std::vector<Observer *> observers;
    float temperature;
    float humidity;
    float pressure;
public:
    WeatherData();
    void registerObserver(Observer *observer) override;
    void removeObserver(Observer *observer) override;
    void notifyObservers();
    void measurementsChanged();
    void setMeasurements(float temperature, float humidity, float pressure);
};


#endif