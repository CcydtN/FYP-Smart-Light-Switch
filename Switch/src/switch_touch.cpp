#include "switch_touch.h"

bool triggeredT8 = false;
bool triggeredT9 = false;
void IRAM_ATTR T8wasActivated() { triggeredT8 = true; }
void IRAM_ATTR T9wasActivated() { triggeredT9 = true; }

const int threshold = 20;

bool touchDelayComp(unsigned long lastTouch){
    if (millis() - lastTouch < touchDelay) return false;
    return true;
}

