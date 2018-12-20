#include "sensor.h"
#include "stdbool.h"

struct Alarm_t
{
    double lowPressureTreshold;
    double highPressureTreshold;
    bool alarmOn;
};

void Alarm_Init(void);
void Alarm_Check(void);
bool Alarm_IsAlarmOn(void);