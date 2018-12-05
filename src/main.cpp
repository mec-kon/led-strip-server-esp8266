#include <Arduino.h>
#include <../.piolibdeps/ESP8266Scheduler_ID917/src/Scheduler.h>

#include "Data.h"
#include "Http.h"

#include "GPIO.h"
#include "Mode.h"

bool new_message = false;
Data data;

Http http(&data, &new_message);
Mode mode(&data, &new_message);




void setup() {
    Serial.begin(115200);

    Scheduler.start(&mode);
    Scheduler.start(&http);
    Scheduler.begin();
}

void loop() {

}