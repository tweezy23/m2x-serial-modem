#ifndef _SERIAL_MODEM_PLATFORM__H_
#define _SERIAL_MODEM_PLATFORM__H_

//  Default hardware specific method pointers to null space to declare prototypes for compile time
#define hw_setPinMode(...)
#define hw_digitalWrite(...)
#define hw_HIGH 0x1
#define hw_LOW  0x0
#define hw_INPUT 0x0
#define hw_OUTPUT 0x1

//  Default platform specific method pointers to null space to declare prototypes for compile time
#define plt_millis() 0
#define plt_delay(...)

#define SMSerialInterfaceClass void *

// PROGMEM strings support
#define PROGMEM_PTR void *
#define PROGMEM_STR(x) x

#include "platforms/_arduino.h"

#endif // _SERIAL_MODEM_PLATFORM__H_
