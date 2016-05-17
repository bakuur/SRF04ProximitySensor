#ifndef DistanceSensor_h
#define DistanceSensor_h

#include <application.h>

#define __cxa_pure_virtual()

//abstract class DistanceSensor
class DistanceSensor
{
  public:
    bool isCloser(int threshold);              // Compare distance value to threshold
    bool isFarther(int threshold);             // Compare distance value to threshold

    void setAveraging(int avg);                // calculate average of multiple samples

  protected:
    int _average;

  private:
    virtual int getDistanceCentimeter()=0;
};
#endif
