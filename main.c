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


//Apel
void panah_kanan(void){
	SetPACA(2, 54);
    WriteData(0b11100000);
    SetPACA(2, 55);
    WriteData(0b11100000);
    SetPACA(2, 56);
    WriteData(0b11100000);
    SetPACA(2, 57);
    WriteData(0b11100000);
	SetPACA(2, 58);
    WriteData(0b11100000);
    SetPACA(2, 59);
    WriteData(0b11100000);
    SetPACA(2, 61);
    WriteData(0b11111100);
    SetPACA(2, 62);
    WriteData(0b11111100);
    SetPACA(2, 63);
    WriteData(0b11111100);
	SetPACA(2, 64);
    WriteData(0b11100000);
    SetPACA(2, 65);
    WriteData(0b11100000);
	SetPACA(2, 66);
    WriteData(0b11100000);
	SetPACA(2, 67);
    WriteData(0b11100000);
    SetPACA(2, 68);
    WriteData(0b11100000);
	SetPACA(2, 69);
    WriteData(0b11100000);
	SetPACA(2, 70);
    WriteData(0b11000000);
    SetPACA(2, 71);
    WriteData(0b11000000);
	SetPACA(2, 72);
    WriteData(0b10000000);

	SetPACA(3, 48);
    WriteData(0b11110000);
    SetPACA(3, 49);
    WriteData(0b11110000);
    SetPACA(3, 50);
    WriteData(0b00001000);
    SetPACA(3, 51);
    WriteData(0b00000111);
	SetPACA(3, 52);
    WriteData(0b00000111);
    SetPACA(3, 53);
    WriteData(0b00000111);
    SetPACA(3, 54);
    WriteData(0b00110000);
    SetPACA(3, 60);
    WriteData(0b00000001);
    SetPACA(3, 61);
    WriteData(0b00000111);
    SetPACA(3, 62);
    WriteData(0b00000111);
    SetPACA(3, 63);
    WriteData(0b00000111);
    SetPACA(3, 64);
    WriteData(0b00000111);
    SetPACA(3, 71);
    WriteData(0b00000011);
    SetPACA(3, 72);
    WriteData(0b00000111);
    SetPACA(3, 73);
    WriteData(0b00001000);
    SetPACA(3, 74);
    WriteData(0b00001000);
    SetPACA(3, 75);
    WriteData(0b11110000);

    SetPACA(4, 48);
    WriteData(0b00011111);
    SetPACA(4, 49);
    WriteData(0b00011111);
    SetPACA(4, 50);
    WriteData(0b11100000);
    SetPACA(4, 73);
    WriteData(0b11000000);
    SetPACA(4, 74);
    WriteData(0b11100000);
    SetPACA(4, 75);
    WriteData(0b00011111);

    SetPACA(5, 50);
    WriteData(0b00000011);
    SetPACA(5, 51);
    WriteData(0b00001100);
    SetPACA(5, 52);
    WriteData(0b00001100);
    SetPACA(5, 53);
    WriteData(0b00001000);
    SetPACA(5, 54);
    WriteData(0b00110000);
    SetPACA(5, 55);
    WriteData(0b00110000);
    SetPACA(5, 56);
    WriteData(0b00110000);
    SetPACA(5, 57);
    WriteData(0b00100000);
    SetPACA(5, 58);
    WriteData(0b11000000);
    SetPACA(5, 59);
    WriteData(0b11000000);
    SetPACA(5, 60);
    WriteData(0b11000000);
    SetPACA(5, 61);
    WriteData(0b11000000);
    SetPACA(5, 62);
    WriteData(0b11000000);
    SetPACA(5, 63);
    WriteData(0b11000000);
    SetPACA(5, 64);
    WriteData(0b11000000);
    SetPACA(5, 65);
    WriteData(0b11000000);
    SetPACA(5, 66);
    WriteData(0b11000000);
    SetPACA(5, 67);
    WriteData(0b00100000);
    SetPACA(5, 68);
    WriteData(0b00110000);
    SetPACA(5, 69);
    WriteData(0b00110000);
    SetPACA(5, 70);
    WriteData(0b00110000);
    SetPACA(5, 71);
    WriteData(0b00001100);
    SetPACA(5, 72);
    WriteData(0b00001100);
    SetPACA(5, 73);
    WriteData(0b00000011);
    SetPACA(5, 74);
    WriteData(0b00000011);

}

//Strawberry
void panah_kiri(void){
	SetPACA(2, 50);
    WriteData(0b10000000);
    SetPACA(2, 51);
    WriteData(0b11000000);
    SetPACA(2, 52);
    WriteData(0b11000000);
    SetPACA(2, 53);
    WriteData(0b11100000);
	SetPACA(2, 54);
    WriteData(0b11100000);
    SetPACA(2, 55);
    WriteData(0b11111000);
    SetPACA(2, 56);
    WriteData(0b11111000);
    SetPACA(2, 57);
    WriteData(0b11111000);
    SetPACA(2, 58);
    WriteData(0b11111000);
	SetPACA(2, 59);
    WriteData(0b11111000);
    SetPACA(2, 60);
    WriteData(0b11111000);
	SetPACA(2, 61);
    WriteData(0b11111110);
	SetPACA(2, 62);
    WriteData(0b11111110);
    SetPACA(2, 63);
    WriteData(0b11111110);
	SetPACA(2, 64);
    WriteData(0b11111000);
	SetPACA(2, 65);
    WriteData(0b11111000);
	SetPACA(2, 66);
    WriteData(0b11111000);
	SetPACA(2, 67);
    WriteData(0b11111000);
	SetPACA(2, 68);
    WriteData(0b11111000);
	SetPACA(2, 69);
    WriteData(0b11111000);
	SetPACA(2, 70);
    WriteData(0b11100000);
	SetPACA(2, 71);
    WriteData(0b11100000);
	SetPACA(2, 72);
    WriteData(0b11000000);
	SetPACA(2, 73);
    WriteData(0b10000000);
	SetPACA(2, 74);
    WriteData(0b10000000);


    SetPACA(3, 49);
    WriteData(0b00000110);
    SetPACA(3, 50);
    WriteData(0b11111101);
    SetPACA(3, 51);
    WriteData(0b00000111);
	SetPACA(3, 52);
    WriteData(0b00000111);
    SetPACA(3, 53);
    WriteData(0b00000011);
    SetPACA(3, 54);
    WriteData(0b00000001);
    SetPACA(3, 55);
    WriteData(0b00011100);
    SetPACA(3, 56);
    WriteData(0b10000110);
    SetPACA(3, 57);
    WriteData(0b10000110);
    SetPACA(3, 58);
    WriteData(0b00000011);
    SetPACA(3, 59);
    WriteData(0b00100011);
    SetPACA(3, 60);
    WriteData(0b11000001);
    SetPACA(3, 61);
    WriteData(0b00000000);
    SetPACA(3, 62);
    WriteData(0b00000001);
    SetPACA(3, 63);
    WriteData(0b00011111);
    SetPACA(3, 64);
    WriteData(0b00111111);
    SetPACA(3, 65);
    WriteData(0b10111111);
    SetPACA(3, 66);
    WriteData(0b00011111);
    SetPACA(3, 67);
    WriteData(0b00001111);
    SetPACA(3, 68);
    WriteData(0b00000001);
    SetPACA(3, 69);
    WriteData(0b00100001);
    SetPACA(3, 70);
    WriteData(0b00000011);
    SetPACA(3, 71);
    WriteData(0b00000111);
    SetPACA(3, 72);
    WriteData(0b10001111);
    SetPACA(3, 73);
    WriteData(0b11111111);


    SetPACA(4, 50);
    WriteData(0b00000001);
    SetPACA(4, 51);
    WriteData(0b00001110);
    SetPACA(4, 52);
    WriteData(0b00001100);
    SetPACA(4, 53);
    WriteData(0b01110000);
    SetPACA(4, 54);
    WriteData(0b10000001);
    SetPACA(4, 55);
    WriteData(0b00110000);
    SetPACA(4, 59);
    WriteData(0b00110000);
    SetPACA(4, 62);
    WriteData(0b01000000);
    SetPACA(4, 63);
    WriteData(0b01000000);
    SetPACA(4, 66);
    WriteData(0b10000000);
    SetPACA(4, 67);
    WriteData(0b00001000);
    SetPACA(4, 70);
    WriteData(0b10000001);
    SetPACA(4, 71);
    WriteData(0b01110000);
    SetPACA(4, 72);
    WriteData(0b00001110);

    SetPACA(5, 54);
    WriteData(0b00000001);
    SetPACA(5, 55);
    WriteData(0b00000110);
    SetPACA(5, 56);
    WriteData(0b00001000);
    SetPACA(5, 57);
    WriteData(0b00001000);
    SetPACA(5, 58);
    WriteData(0b00010001);
    SetPACA(5, 59);
    WriteData(0b01100000);
    SetPACA(5, 60);
    WriteData(0b01001000);
    SetPACA(5, 61);
    WriteData(0b10000001);
    SetPACA(5, 62);
    WriteData(0b10000000);
    SetPACA(5, 63);
    WriteData(0b10000000);
    SetPACA(5, 64);
    WriteData(0b01000000);
    SetPACA(5, 65);
    WriteData(0b01100000);
    SetPACA(5, 66);
    WriteData(0b00110000);
    SetPACA(5, 67);
    WriteData(0b00001000);
    SetPACA(5, 68);
    WriteData(0b00000100);
    SetPACA(5, 69);
    WriteData(0b00000010);
    SetPACA(5, 70);
    WriteData(0b00000001);
}


//Pisang
void panah_atas(void){
	SetPACA(2, 48);
    WriteData(0b11111100);
	SetPACA(2, 49);
    WriteData(0b11111100);
	SetPACA(2, 50);
    WriteData(0b00000011);
    SetPACA(2, 51);
    WriteData(0b00000011);
    SetPACA(2, 52);
    WriteData(0b00000011);
    SetPACA(2, 53);
    WriteData(0b0001100);
	SetPACA(2, 54);
    WriteData(0b01110000);
    SetPACA(2, 55);
    WriteData(0b01110000);
    SetPACA(2, 56);
    WriteData(0b01110000);
    SetPACA(2, 57);
    WriteData(0b10000000);
	SetPACA(2, 61);
    WriteData(0b10000000);
	SetPACA(2, 62);
    WriteData(0b10000000);
    SetPACA(2, 63);
    WriteData(0b01110000);
	SetPACA(2, 64);
    WriteData(0b01110000);
	SetPACA(2, 65);
    WriteData(0b01110000);
	SetPACA(2, 66);
    WriteData(0b01110000);
	SetPACA(2, 67);
    WriteData(0b01110000);
	SetPACA(2, 68);
    WriteData(0b01110000);
	SetPACA(2, 69);
    WriteData(0b01110000);

    SetPACA(3, 48);
    WriteData(0b00000111);
    SetPACA(3, 49);
    WriteData(0b00000111);
    SetPACA(3, 50);
    WriteData(0b00011000);
    SetPACA(3, 51);
    WriteData(0b01100000);
	SetPACA(3, 52);
    WriteData(0b01100000);
    SetPACA(3, 53);
    WriteData(0b10000000);
    SetPACA(3, 54);
    WriteData(0b10000000);
    SetPACA(3, 55);
    WriteData(0b10000000);
    SetPACA(3, 56);
    WriteData(0b10000000);
    SetPACA(3, 57);
    WriteData(0b10000001);
    SetPACA(3, 58);
    WriteData(0b10000110);
    SetPACA(3, 59);
    WriteData(0b10000110);
    SetPACA(3, 60);
    WriteData(0b01111110);
    SetPACA(3, 61);
    WriteData(0b10000001);
    SetPACA(3, 62);
    WriteData(0b10000001);
    SetPACA(3, 63);
    WriteData(0b10000000);
    SetPACA(3, 64);
    WriteData(0b11111000);
    SetPACA(3, 65);
    WriteData(0b11111000);
    SetPACA(3, 66);
    WriteData(0b00000110);
    SetPACA(3, 67);
    WriteData(0b00000110);
    SetPACA(3, 68);
    WriteData(0b00000110);
    SetPACA(3, 69);
    WriteData(0b00000110);


    SetPACA(4, 50);
    WriteData(0b11100000);
    SetPACA(4, 51);
    WriteData(0b00011000);
    SetPACA(4, 52);
    WriteData(0b00011000);
    SetPACA(4, 53);
    WriteData(0b00000111);
    SetPACA(4, 54);
    WriteData(0b10000111);
    SetPACA(4, 55);
    WriteData(0b10000111);
    SetPACA(4, 56);
    WriteData(0b10000111);
    SetPACA(4, 57);
    WriteData(0b10000111);
    SetPACA(4, 58);
    WriteData(0b01000111);
    SetPACA(4, 59);
    WriteData(0b01000111);
    SetPACA(4, 60);
    WriteData(0b11111000);
    SetPACA(4, 61);
    WriteData(0b11111111);
    SetPACA(4, 62);
    WriteData(0b11111111);
    SetPACA(4, 63);
    WriteData(0b11111111);
    SetPACA(4, 64);
    WriteData(0b11111111);
    SetPACA(4, 65);
    WriteData(0b11111111);
    SetPACA(4, 66);
    WriteData(0b11111111);
    SetPACA(4, 67);
    WriteData(0b11111000);
    SetPACA(4, 68);
    WriteData(0b11111000);
    SetPACA(4, 69);
    WriteData(0b11111000);
    SetPACA(4, 70);
    WriteData(0b01100000);
    SetPACA(4, 71);
    WriteData(0b10000000);
    SetPACA(4, 72);
    WriteData(0b10000000);
    SetPACA(4, 73);
    WriteData(0b10000000);

    SetPACA(5, 50);
    WriteData(0b00111111);
    SetPACA(5, 51);
    WriteData(0b11000000);
    SetPACA(5, 52);
    WriteData(0b11000000);
    SetPACA(5, 53);
    WriteData(0b00111110);
    SetPACA(5, 54);
    WriteData(0b00000001);
    SetPACA(5, 55);
    WriteData(0b00000001);
    SetPACA(5, 56);
    WriteData(0b00000001);
    SetPACA(5, 57);
    WriteData(0b00000001);
    SetPACA(5, 60);
    WriteData(0b00000001);
    SetPACA(5, 61);
    WriteData(0b00001111);
    SetPACA(5, 62);
    WriteData(0b00001111);
    SetPACA(5, 63);
    WriteData(0b00011111);
    SetPACA(5, 64);
    WriteData(0b11111111);
    SetPACA(5, 65);
    WriteData(0b11111111);
    SetPACA(5, 66);
    WriteData(0b11111111);
    SetPACA(5, 67);
    WriteData(0b11111111);
    SetPACA(5, 68);
    WriteData(0b11111111);
    SetPACA(5, 69);
    WriteData(0b11111111);
    SetPACA(5, 70);
    WriteData(0b11111111);
    SetPACA(5, 71);
    WriteData(0b11111111);
    SetPACA(5, 72);
    WriteData(0b11111111);
    SetPACA(5, 73);
    WriteData(0b11111111);
    SetPACA(5, 74);
    WriteData(0b00111110);
    SetPACA(5, 75);
    WriteData(0b00111110);
}

//Semangka
void panah_bawah(void){
	SetPACA(2, 48);
	WriteData(0b10000000);
	SetPACA(2, 49);
	WriteData(0b10000000);
	SetPACA(2, 50);
	WriteData(0b11100000);
	SetPACA(2, 51);
	WriteData(0b11100000);
	SetPACA(2, 52);
	WriteData(0b01111100);
	SetPACA(2, 53);
	WriteData(0b01111100);
	SetPACA(2, 54);
	WriteData(0b00011100);
	SetPACA(2, 55);
	WriteData(0b00011100);
	SetPACA(2, 56);
	WriteData(0b00100000);
	SetPACA(2, 57);
	WriteData(0b00100000);
	SetPACA(2, 58);
	WriteData(0b01100000);
	SetPACA(2, 59);
	WriteData(0b10000000);
	SetPACA(2, 60);
	WriteData(0b10000000);

	SetPACA(3, 48);
	WriteData(0b11111111);
	SetPACA(3, 49);
	WriteData(0b11111111);
	SetPACA(3, 50);
	WriteData(0b11111111);
	SetPACA(3, 51);
	WriteData(0b11111111);
	SetPACA(3, 56);
	WriteData(0b11000110);
	SetPACA(3, 57);
	WriteData(0b11000110);
	SetPACA(3, 58);
	WriteData(0b11000110);
	SetPACA(3, 59);
	WriteData(0b11000000);
	SetPACA(3, 60);
	WriteData(0b11000001);
	SetPACA(3, 61);
	WriteData(0b00000010);
	SetPACA(3, 62);
	WriteData(0b00000110);
	SetPACA(3, 63);
	WriteData(0b00001000);
	SetPACA(3, 64);
	WriteData(0b00111000);
	SetPACA(3, 65);
	WriteData(0b01000000);
	SetPACA(3, 66);
	WriteData(0b01000000);
	SetPACA(3, 67);
	WriteData(0b11000000);

	SetPACA(4, 48);
	WriteData(0b00011111);
	SetPACA(4, 49);
	WriteData(0b00011111);
	SetPACA(4, 50);
	WriteData(0b11111111);
	SetPACA(4, 51);
	WriteData(0b11111111);
	SetPACA(4, 52);
	WriteData(0b11100000);
	SetPACA(4, 53);
	WriteData(0b11100000);
	SetPACA(4, 62);
	WriteData(0b01111000);
	SetPACA(4, 63);
	WriteData(0b01111000);
	SetPACA(4, 68);
	WriteData(0b01100001);
	SetPACA(4, 69);
	WriteData(0b01100011);
	SetPACA(4, 70);
	WriteData(0b00000100);
	SetPACA(4, 71);
	WriteData(0b00011100);
	SetPACA(4, 72);
	WriteData(0b00100000);
	SetPACA(4, 73);
	WriteData(0b01100000);
	SetPACA(4, 74);
	WriteData(0b10000000);
	SetPACA(4, 75);
	WriteData(0b10000000);

	SetPACA(5, 50);
	WriteData(0b00000001);
	SetPACA(5, 51);
	WriteData(0b00000001);
	SetPACA(5, 52);
	WriteData(0b00000111);
	SetPACA(5, 53);
	WriteData(0b00000111);
	SetPACA(5, 54);
	WriteData(0b00011111);
	SetPACA(5, 55);
	WriteData(0b00011111);
	SetPACA(5, 56);
	WriteData(0b00011110);
	SetPACA(5, 57);
	WriteData(0b00011110);
	SetPACA(5, 58);
	WriteData(0b00011110);
	SetPACA(5, 59);
	WriteData(0b11110000);
	SetPACA(5, 60);
	WriteData(0b11110000);
	SetPACA(5, 61);
	WriteData(0b11110000);
	SetPACA(5, 62);
	WriteData(0b11110000);
	SetPACA(5, 63);
	WriteData(0b11110000);
	SetPACA(5, 64);
	WriteData(0b11110000);
	SetPACA(5, 65);
	WriteData(0b11110000);
	SetPACA(5, 66);
	WriteData(0b11110000);
	SetPACA(5, 67);
	WriteData(0b11110000);
	SetPACA(5, 68);
	WriteData(0b11110000);
	SetPACA(5, 69);
	WriteData(0b11110000);
	SetPACA(5, 70);
	WriteData(0b00111000);
	SetPACA(5, 71);
	WriteData(0b00111000);
	SetPACA(5, 72);
	WriteData(0b00111110);
	SetPACA(5, 73);
	WriteData(0b00111110);
	SetPACA(5, 74);
	WriteData(0b00000111);
	SetPACA(5, 75);
	WriteData(0b00000111);

}

//Labu Halloween
void panah_tengah(void){

	SetPACA(2, 53);
	WriteData(0b10000000);
	SetPACA(2, 54);
	WriteData(0b10000000);
	SetPACA(2, 55);
	WriteData(0b10000000);
	SetPACA(2, 56);
	WriteData(0b01000000);
	SetPACA(2, 57);
	WriteData(0b01000000);
	SetPACA(2, 58);
	WriteData(0b01000000);
	SetPACA(2, 59);
	WriteData(0b01000100);
	SetPACA(2, 60);
	WriteData(0b10011110);
	SetPACA(2, 61);
	WriteData(0b11111110);
	SetPACA(2, 62);
	WriteData(0b11111110);
	SetPACA(2, 63);
	WriteData(0b11111000);
	SetPACA(2, 64);
	WriteData(0b10000000);
	SetPACA(2, 65);
	WriteData(0b01000000);
	SetPACA(2, 66);
	WriteData(0b01000000);
	SetPACA(2, 67);
	WriteData(0b01000000);
	SetPACA(2, 68);
	WriteData(0b01000000);
	SetPACA(2, 69);
	WriteData(0b10000000);
	SetPACA(2, 70);
	WriteData(0b10000000);
	SetPACA(2, 71);
	WriteData(0b10000000);

	SetPACA(3, 48);
	WriteData(0b11100000);
	SetPACA(3, 49);
	WriteData(0b00011100);
	SetPACA(3, 50);
	WriteData(0b11100010);
	SetPACA(3, 51);
	WriteData(0b00010001);
	SetPACA(3, 52);
	WriteData(0b00001101);
	SetPACA(3, 53);
	WriteData(0b00000010);
	SetPACA(3, 54);
	WriteData(0b00000010);
	SetPACA(3, 55);
	WriteData(0b11000000);
	SetPACA(3, 56);
	WriteData(0b11100000);
	SetPACA(3, 57);
	WriteData(0b11100010);
	SetPACA(3, 58);
	WriteData(0b11100010);
	SetPACA(3, 59);
	WriteData(0b11000001);
	SetPACA(3, 65);
	WriteData(0b11000001);
	SetPACA(3, 66);
	WriteData(0b11100010);
	SetPACA(3, 67);
	WriteData(0b11100010);
	SetPACA(3, 68);
	WriteData(0b11100000);
	SetPACA(3, 69);
	WriteData(0b11000000);
	SetPACA(3, 70);
	WriteData(0b00000010);
	SetPACA(3, 71);
	WriteData(0b00000010);
	SetPACA(3, 72);
	WriteData(0b00001101);
	SetPACA(3, 73);
	WriteData(0b00010001);
	SetPACA(3, 74);
	WriteData(0b11100010);
	SetPACA(3, 75);
	WriteData(0b00011100);
	SetPACA(3, 76);
	WriteData(0b11100000);


	SetPACA(4, 48);
	WriteData(0b01111111);
	SetPACA(4, 49);
	WriteData(0b10000000);
	SetPACA(4, 50);
	WriteData(0b00011111);
	SetPACA(4, 51);
	WriteData(0b10000000);
	SetPACA(4, 55);
	WriteData(0b00000001);
	SetPACA(4, 56);
	WriteData(0b00100001);
	SetPACA(4, 57);
	WriteData(0b11000001);
	SetPACA(4, 58);
	WriteData(0b11000001);
	SetPACA(4, 59);
	WriteData(0b10000001);
	SetPACA(4, 60);
	WriteData(0b10011000);
	SetPACA(4, 61);
	WriteData(0b10011100);
	SetPACA(4, 62);
	WriteData(0b10011100);
	SetPACA(4, 63);
	WriteData(0b10011100);
	SetPACA(4, 64);
	WriteData(0b10011000);
	SetPACA(4, 65);
	WriteData(0b10000001);
	SetPACA(4, 66);
	WriteData(0b11000001);
	SetPACA(4, 67);
	WriteData(0b11000001);
	SetPACA(4, 68);
	WriteData(0b00100001);
	SetPACA(4, 69);
	WriteData(0b00000001);
	SetPACA(4, 73);
	WriteData(0b10000000);
	SetPACA(4, 74);
	WriteData(0b00011111);
	SetPACA(4, 75);
	WriteData(0b10000000);
	SetPACA(4, 76);
	WriteData(0b01111111);

	SetPACA(5, 49);
	WriteData(0b00000001);
	SetPACA(5, 50);
	WriteData(0b00000010);
	SetPACA(5, 51);
	WriteData(0b00000100);
	SetPACA(5, 52);
	WriteData(0b00000101);
	SetPACA(5, 53);
	WriteData(0b00011010);
	SetPACA(5, 54);
	WriteData(0b00010010);
	SetPACA(5, 55);
	WriteData(0b00010000);
	SetPACA(5, 56);
	WriteData(0b00100000);
	SetPACA(5, 57);
	WriteData(0b00100000);
	SetPACA(5, 58);
	WriteData(0b00100000);
	SetPACA(5, 59);
	WriteData(0b00100000);
	SetPACA(5, 60);
	WriteData(0b00100001);
	SetPACA(5, 61);
	WriteData(0b00100001);
	SetPACA(5, 62);
	WriteData(0b00100001);
	SetPACA(5, 63);
	WriteData(0b00100001);
	SetPACA(5, 64);
	WriteData(0b00100001);
	SetPACA(5, 65);
	WriteData(0b00100000);
	SetPACA(5, 66);
	WriteData(0b00100000);
	SetPACA(5, 67);
	WriteData(0b00100000);
	SetPACA(5, 68);
	WriteData(0b00100000);
	SetPACA(5, 69);
	WriteData(0b00010000);
	SetPACA(5, 70);
	WriteData(0b00010010);
	SetPACA(5, 71);
	WriteData(0b00011010);
	SetPACA(5, 72);
	WriteData(0b00000101);
	SetPACA(5, 73);
	WriteData(0b00000100);
	SetPACA(5, 74);
	WriteData(0b00000010);
	SetPACA(5, 75);
	WriteData(0b00000001);

}

void kanan(void){
	clr_all_pannal();
	panah_kanan();
	score();
	nyawa();
	for (i=0; i<=waktu; i++){
		temp = Scankey();
		if(temp == 6){
			print_lcd(3, "Jawaban Benar");
			close_seven_segment();
			buzzer_benar();
			DrvSYS_Delay(2000000);
			a++;
			random();
		}else if(temp == 2 || temp == 4 || temp == 5 || temp == 8){
			print_lcd(3, "Jawaban Salah");
			close_seven_segment();
			buzzer_salah();
			DrvSYS_Delay(2000000);
			life--;
			random();

		}
		score();
	}
	waktu_habis();
}

void kiri(void){
	clr_all_pannal();
	panah_kiri();
	score();
	nyawa();
	for (i=0; i<=waktu; i++){
		temp = Scankey();
		if(temp == 4){
			print_lcd(3, "Jawaban Benar");
			close_seven_segment();
			buzzer_benar();
			DrvSYS_Delay(2000000);
			a++;
			random();
		}else if(temp == 2 || temp == 6 || temp == 5 || temp == 8){
			print_lcd(3, "Jawaban Salah");
			close_seven_segment();
			buzzer_salah();
			DrvSYS_Delay(2000000);
			life--;
			random();
		}
		score();
	}
	waktu_habis();
}

void atas(void){
	clr_all_pannal();
	panah_atas();
	score();
	nyawa();
	for (i=0; i<=waktu; i++){
		temp = Scankey();
		if(temp == 2){
			print_lcd(3, "Jawaban Benar");
			close_seven_segment();
			buzzer_benar();
			DrvSYS_Delay(2000000);
			a++;
			random();
		}else if(temp == 6 || temp == 4 || temp == 5 || temp == 8){
			print_lcd(3, "Jawaban Salah");
			close_seven_segment();
			buzzer_salah();
			DrvSYS_Delay(2000000);
			life--;
			random();
		}
		score();
	}
	waktu_habis();
}

void bawah(void){
	clr_all_pannal();
	panah_bawah();
	score();
	nyawa();
	for (i=0; i<=waktu; i++){
		temp = Scankey();
		if(temp == 8){
			print_lcd(3, "Jawaban Benar");
			close_seven_segment();
			buzzer_benar();
			DrvSYS_Delay(2000000);
			a++;
			random();
		}else if(temp == 6 || temp == 4 || temp == 5 || temp == 2){
			print_lcd(3, "Jawaban Salah");
			close_seven_segment();
			buzzer_salah();
			DrvSYS_Delay(2000000);
			life--;
			random();
		}
		score();
	}
	waktu_habis();
}

void tengah(void){
	clr_all_pannal();
	panah_tengah();
	score();
	nyawa();
	for (i=0; i<=waktu; i++){
		temp = Scankey();
		if(temp == 5){
			print_lcd(3, "Jawaban Benar");
			close_seven_segment();
			buzzer_benar();
			DrvSYS_Delay(2000000);
			a++;
			random();
		}else if(temp == 6 || temp == 4 || temp == 2 || temp == 8){
			print_lcd(3, "Jawaban Salah");
			close_seven_segment();
			buzzer_salah();
			DrvSYS_Delay(2000000);
			life--;
			random();
		}
		score();
	}
	waktu_habis();
}

void nyawa(void){
	if(life == 0){
		mati();
	}else if(life == 5){
		print_lcd(0, "Nyawa : 5");
	}else if(life == 4){
		print_lcd(0, "Nyawa : 4");
	}else if(life == 3){
		print_lcd(0, "Nyawa : 3");
	}else if(life == 2){
		print_lcd(0, "Nyawa : 2");
	}else if(life == 1){
		print_lcd(0, "Nyawa : 1");
	}
}

void random(void){
	while(1){
		score();
		nyawa();
		waktu -= 5;
		if(waktu <= 50) waktu = 50;
		angka = i;
		sat = angka % 10;
		angka /= 10;
		pul = angka % 10;
		angka /= 10;
		rib = angka % 10;
		if(sat == 0)kanan();
		else if(sat == 1)kiri();
		else if(sat == 2)atas();
		else if(sat == 3)bawah();
		else if(sat == 4)tengah();
		else if(sat == 5)kanan();
		else if(sat == 6)kiri();
		else if(sat == 7)atas();
		else if(sat == 8)bawah();
		else if(sat == 9)tengah();
	}
}

void score(void){
	angka1  = a;
	sat1 = angka1%10;
	angka1 /= 10;
	pul1 = angka1%10;
	angka1 /= 10;
	rat1 = angka1%10;
	angka1 /= 10;
	rib1 = angka1%10;
	close_seven_segment();
	show_seven_segment(0, sat1);
	DrvSYS_Delay(1000);
	close_seven_segment();
	show_seven_segment(1, pul1);
	DrvSYS_Delay(1000);
	close_seven_segment();
	show_seven_segment(2, life);
	DrvSYS_Delay(1000);
	close_seven_segment();
	show_seven_segment(3, 0);
	DrvSYS_Delay(1000);
}

void mati(void){
	clr_all_pannal();
		score();
		print_lcd(1,"    Game Over");
		print_lcd(2,"   Ulangi Lagi");

	DrvGPIO_ClrBit(E_GPB, 11);
	DrvSYS_Delay(1000000);
	DrvGPIO_SetBit(E_GPB, 11);
	DrvSYS_Delay(100000);
	DrvGPIO_ClrBit(E_GPB, 11);
	DrvSYS_Delay(1000000);
	DrvGPIO_SetBit(E_GPB, 11);
	DrvSYS_Delay(100000);
	DrvGPIO_ClrBit(E_GPB, 11);
	DrvSYS_Delay(100000);
	DrvGPIO_SetBit(E_GPB, 11);
	DrvSYS_Delay(1000000);

	while(1){
			score();
			print_lcd(1,"    Game Over");
			print_lcd(2,"   Ulangi Lagi");

		}
}

void waktu_habis(void){
	clr_all_pannal();
	close_seven_segment();
	print_lcd(1,"    Waktu End");
	print_lcd(2,"    Coba Lagi");
	buzzer_salah();
	life--;
	DrvSYS_Delay(2000000);
	score();
	nyawa();
}

void buzzer_benar(void){
	DrvGPIO_ClrBit(E_GPA,13);
	DrvGPIO_ClrBit(E_GPB, 11);
	DrvSYS_Delay(2000000);
	DrvGPIO_SetBit(E_GPA,13);
	DrvGPIO_SetBit(E_GPB, 11);
}

void buzzer_salah(void){
	DrvGPIO_ClrBit(E_GPA,14);


	DrvGPIO_ClrBit(E_GPB, 11);
	DrvSYS_Delay(100000);
	DrvGPIO_SetBit(E_GPB, 11);
	DrvSYS_Delay(100000);
	DrvGPIO_ClrBit(E_GPB, 11);
	DrvSYS_Delay(100000);
	DrvGPIO_SetBit(E_GPB, 11);
	DrvSYS_Delay(100000);
	DrvGPIO_ClrBit(E_GPB, 11);
	DrvSYS_Delay(100000);
	DrvGPIO_SetBit(E_GPB, 11);
	DrvSYS_Delay(100000);

	DrvGPIO_SetBit(E_GPA,14);

}

void pembuka(void){
	print_lcd(0,"Tugas Akhir TMA");
	print_lcd(1,"  Game NUC140");
	print_lcd(2,"  Kelompok 10");
	print_lcd(3,"   Buahahaha");
	DrvSYS_Delay(2500000);
	DrvSYS_Delay(2500000);
	DrvSYS_Delay(2500000);
	clr_all_pannal();
//	print_lcd(0,"Percobaan Game");
	print_lcd(1,"Hafalkan gambar");
	print_lcd(2,"   berikut!!");
//	print_lcd(3,"Mikrokontroller");
	DrvSYS_Delay(2500000);
	DrvSYS_Delay(2500000);
	DrvSYS_Delay(2500000);
	clr_all_pannal();
	print_lcd(0,"      Apel");
	panah_kanan();
	print_lcd(7,"     Nomor 6");
	DrvSYS_Delay(2500000);
	DrvSYS_Delay(2500000);
	clr_all_pannal();
	print_lcd(0,"   Strawberry");
	panah_kiri();
	print_lcd(7,"     Nomor 4");
	DrvSYS_Delay(2500000);
	DrvSYS_Delay(2500000);
	clr_all_pannal();
	print_lcd(0,"     Pisang");
	panah_atas();
	print_lcd(7,"     Nomor 2");
	DrvSYS_Delay(2500000);
	DrvSYS_Delay(2500000);
	clr_all_pannal();
	print_lcd(0,"    Semangka");
	panah_bawah();
	print_lcd(7,"     Nomor 8");
	DrvSYS_Delay(2500000);
	DrvSYS_Delay(2500000);
	clr_all_pannal();
	print_lcd(0,"      Labu");
	panah_tengah();
	print_lcd(7,"     Nomor 5");
	DrvSYS_Delay(2500000);
	DrvSYS_Delay(2500000);
	clr_all_pannal();
//	print_lcd(1,"  Bersiap-siap");
//	print_lcd(2,"        5");
//	DrvSYS_Delay(2500000);
//	print_lcd(2,"        4");
//	DrvSYS_Delay(2500000);
//	print_lcd(2,"        3");
//	DrvSYS_Delay(2500000);
//	print_lcd(2,"        2");
//	DrvSYS_Delay(2500000);
//	print_lcd(2,"        1");
//	DrvSYS_Delay(2500000);
//	clr_all_pannal();
//	print_lcd(1,"       Mulai!");
//	DrvSYS_Delay(2500000);
}

void Init();
int main(void){
    Init();
    UNLOCKREG();
    DrvSYS_SetOscCtrl(E_SYS_XTL12M, 1);
    DrvSYS_Delay(5000);
    DrvSYS_SelectHCLKSource(0);
    LOCKREG();
    DrvSYS_SetClockDivider(E_SYS_HCLK_DIV, 0);
    Initial_pannel();
    clr_all_pannal();
    DrvGPIO_ClrBit(E_GPD, 14);
    OpenKeyPad();
    while(1){
    	tegangan = ((float)adc/4096) * 5000;
    	pembuka();
    	random();
    }
}
