#ifndef WIDGET_SHAKE_H_
#define WIDGET_SHAKE_H_

#include "application.h"


class WidgetShake
{
    public:
        WidgetShake(uint8_t ucItem = 0);
        ~WidgetShake();
        void begin(void (*UserCallBack)(void) = NULL);
        void displayShakeStatus(uint8_t ucVal);

    private:
        char pDataStatusTopic[64];
        uint8_t _Item=0;
};

#endif
