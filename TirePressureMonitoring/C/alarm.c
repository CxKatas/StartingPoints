#include "alarm.h"
#include "sensor.h"

struct Alarm_t AlarmData;

void Alarm_Init(void)
{
    Sensor_Init();
    AlarmData.lowPressureTreshold = 17;
    AlarmData.highPressureTreshold = 21;
    AlarmData.alarmOn = false;
}

void Alarm_Check(void)
{
    double psiPressureValue = Sensor_PopNextPressurePsiValue();

    if (psiPressureValue < AlarmData.lowPressureTreshold || AlarmData.highPressureTreshold < psiPressureValue)
    {
        AlarmData.alarmOn = true;
    }
}

bool Alarm_IsAlarmOn(void)
{
    return AlarmData.alarmOn;
}
