#ifndef  _AB_BLE_H
#define _AB_BLE_H

#include <Arduino.h>

class AB_BLE {

    public:
        AB_BLE(Stream *s = &Serial1);
        void write(unsigned char dat);
        void writeBytes(unsigned char *dat, unsigned char len);

        int available();
        int read();

    private:
        Stream    *stream;     // -> BLE module, e.g. SoftwareSerial or Serial1
};

#endif
