#include <algorithm>

#include "WeatherData.h"
#include "Observer.h"

WeatherData::WeatherData() {}


void WeatherData::registerObserver(Observer *observer) 
{
    this->observers.push_back(observer);
}


void WeatherData::removeObserver(Observer *observer) 
{
    auto iterator = std::find(this->observers.begin(), this->observers.end(), observer);
    if (iterator != this->observers.end())
    {
        this->observers.erase(iterator);
    }
}


void WeatherData::notifyObservers()
{
    for (auto i = 0; i < this->observers.size(); ++i)
    {
        Observer *oberserver = this->observers[i];
        oberserver->update(
            this->temperature, this->humidity, this->pressure
        );
    }
}


void WeatherData::measurementsChanged()
{
    this->notifyObservers();
}

void WeatherData::setMeasurements(float temperature, float humidity, float pressure)
{
    this->temperature = temperature;
    this->humidity = humidity;
    this->pressure = pressure;
    this->measurementsChanged();
}