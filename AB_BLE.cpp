#include "AB_BLE.h"

AB_BLE::AB_BLE(Stream *s) : (stream(s)){};

void AB_BLE::begin(unsigned long bound) {
    stream->begin(bound);
}

int AB_BLE::available() {
    return stream->available();
}

void AB_BLE::write(unsigned char dat) {
    stream->write(dat);
}

void AB_BLE::writeBytes(unsigned char *dat, unsigned char len) {
    delay(10);
    if(len > 0) {
        stream->write(dat, len);
    }
}

int AB_BLE::read() {
    delay(10);	
    return stream->read();
}
