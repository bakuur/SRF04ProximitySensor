#ifndef UltrasonicDistanceSensor_h
#define UltrasonicDistanceSensor_h

#include <application.h>

#define __cxa_pure_virtual()

#include "DistanceSensor.h"

class UltrasonicDistanceSensor : public DistanceSensor
{
  public:
    virtual int getDistanceTime()=0;

    void begin();
    void begin(int echoPin, int trigPin);

    int getDistanceCentimeter();
    int getDistanceInch();

  protected:
    int _trigPin;
    int _echoPin;
};
#endif
