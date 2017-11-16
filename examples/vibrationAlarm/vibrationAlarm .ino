/*
 ************************************************************************
 * 作者:  IntoRobot Team
 * 版本:  V1.0.0
 * 日期:  03-30-15
 ************************************************************************
 功能描述：
 震动报警器：检测到震动并报警

 所需器件:
 1.震动传感器SW-420

 接线说明:
 震动传感器                   核心板
 1.VCC                       +3.3V
 2.GND                        GND
 3.DO                         D0

 */

#include <WidgetShake.h>

#define ShakeSensorINPUT   D0

WidgetShake shake = WidgetShake();

void setup()
{
    pinMode(ShakeSensorINPUT, INPUT);
}

void loop()
{
    if(digitalRead(ShakeSensorINPUT))
    {
        shake.displayShakeStatus(1);
    }
    else
    {
        shake.displayShakeStatus(0);
    }
    delay(3000);
}

