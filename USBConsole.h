#include "USBSerial.h"

FileHandle* mbed::mbed_override_console(int)
{
    static USBSerial  usbSerialConsole(false);
    usbSerialConsole.connect();
    return &usbSerialConsole;
}
