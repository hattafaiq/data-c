#include "serialo.h"
#include <iostream>
using namespace std;



int  main()
{
unsigned char  dataArray[2];
    mySerial serial("/dev/ttyUSB0",9600);
    serial.Receive(dataArray,sizeof(dataArray)); 
return 0;
}