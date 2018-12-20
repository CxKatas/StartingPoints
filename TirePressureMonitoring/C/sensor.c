#include "sensor.h"

#include <stdlib.h>
#include <time.h>


void Sensor_Init(void)
{
    srand((unsigned)time(0));
}

double Sensor_PopNextPressurePsiValue(void)
{
    // placeholder implementation that simulates a real sensor in a real tire
    double pressure = 16 + (float)rand()/((float)RAND_MAX/(6));
    return pressure;
}