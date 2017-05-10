#ifndef COMMS_H
#define COMMS_H

uint16_t Gdata[9];
uint8_t realtimebuffer[60];   //buffer array to store the realtime data read
Volatile uint8_t replylength;          // the length of the reply variable

void command();
sendTheCommand(uint8_t commandletter, uint8_t canid, uint16_t cmdoffset, uint16_t cmdlength)

#endif // COMMS_H
