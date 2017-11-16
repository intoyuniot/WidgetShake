#include "WidgetShake.h"


WidgetShake::WidgetShake(uint8_t ucItem)
{
    _Item=ucItem;
    memset(pDataStatusTopic,0,sizeof(pDataStatusTopic));
    sprintf(pDataStatusTopic,"channel/shake_%d/data/status",_Item);
}

WidgetShake::~WidgetShake()
{

}

void WidgetShake::begin(void (*UserCallBack)(void))
{

}

void WidgetShake::displayShakeStatus(uint8_t ucVal)
{
    IntoRobot.publish(pDataStatusTopic,ucVal);
}



