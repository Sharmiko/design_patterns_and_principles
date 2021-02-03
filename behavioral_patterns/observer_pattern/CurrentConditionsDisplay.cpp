#include <iostream>

#include "Observer.h"
#include "WeatherData.h"
#include "CurrentConditionsDisplay.h"


CurrentConditionsDisplay::CurrentConditionsDisplay(Subject *weatherData)
{
    this->weatherData = weatherData;
    weatherData->registerObserver(this);
}


void CurrentConditionsDisplay::update(float temperature, float humidity, float pressure)
{
    this->temperature = temperature;
    this->humidity = humidity;
    this->display();
}


void CurrentConditionsDisplay::display()
{
    std::cout << "Current conditions: " << this->temperature
        << "F degress and " << this->humidity << "% humidity" << std::endl;
}