#include "DistanceSRF04.h"

//for the RGB LED
int ledRed = D0;
int ledBlue = D1;
int ledGreen = D2;

const bool on = LOW;
const bool off = HIGH;

const bool red[] = {on,off,off};
const bool green[] = {off,on,off};
const bool blue[] = {off,off,on};
const bool yellow[] = {on,on,off};
const bool cyan[] = {off,on,on};
const bool magenta[] = {on,off,on};
const bool white[] = {on,on,on};
const bool black[] = {off,off,off};

//for the Proximity Sensor
DistanceSRF04 Dist;
int distance;


void setup()
{

   pinMode(ledRed, OUTPUT);
   pinMode(ledBlue, OUTPUT);
   pinMode(ledGreen, OUTPUT);
   
   Dist.begin(A2,A3);

}


void loop()
{
    distance = Dist.getDistanceCentimeter();
    
    if (distance <= 10){
        toggleColor(red);
    }
    else{
        toggleColor(green);
    }
    
    delay(100);
    
}

void toggleColor(const bool color[]){
    digitalWrite(ledRed, color[0]);
    digitalWrite(ledBlue, color[1]);
    digitalWrite(ledGreen, color[2]);
}


