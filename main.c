#include "DrvSYS.h"
#include "DrvGPIO.h"
#include "LCD_Driver.h"
#include "ScanKey.h"
#include "Seven_Segment.h"
#include <String.h>

int j, k, i, angka, sat, pul, rat, rib, angka1, sat1, pul1, rat1, rib1, nilai;
int waktu = 300;
int a = 0;
int life = 5;
int adc;
int tegangan;
unsigned char temp;

void Init();
int main(void)
{
    Init();
    while(1)
    {
    }
}
