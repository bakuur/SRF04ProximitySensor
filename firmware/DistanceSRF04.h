#ifndef DistanceSRF04_h
#define DistanceSRF04_h

#include "application.h"

#include "UltrasonicDistanceSensor.h"

class DistanceSRF04 : public UltrasonicDistanceSensor
{
  public:
    DistanceSRF04();
    int getDistanceTime();

  private:
    long _duration;
};
#endif
