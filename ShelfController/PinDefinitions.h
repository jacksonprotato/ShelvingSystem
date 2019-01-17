#define _PIN_DEFINITIONS_H_
#ifdef _PIN_DEFINITIONS_H_

//AC DRIVER:
// clockwise
#define AC_PIN_1 12
// counterclockwise 
#define AC_PIN_2 13

//CURRENT SENSOR:
#define CURRENT_SENS_PIN 35

//SPI:
#define ESP32_MOSI 23
#define ESP32_MISO 19
#define ESP32_SCK 18
#define ESP32_CS 5

//DC DRIVER:
#define HBRIDGE_DISABLE 15
//reserved for parallel Control 
//(conflict with servo pins):
/*
#define HBRIDGE_IN_1 16
#define HBRIDGE_IN_2 17
*/

//SERVO:
#define SERVO_1 16
#define SERVO_2 17

//DIP SW:
// LSB for addressing will be DIP_SW_1
#define DIP_SW_1 34
#define DIP_SW_2 25
#define DIP_SW_3 26
#define DIP_SW_4 27

//I2C:
#define ESP32_SDA 21
#define ESP32_SDL 22

//IO EXPANDER:
// note: remember these are IO Expander pins not the WROOM 32's
//LIGHTS:
#define IO_RST 14
#define IO_INT 4
#define IO_RED 12
#define IO_GRN 13
#define IO_BLU 14
#define IO_ORG 15
//REMAINING IOS:
#define IO_0 0
#define IO_1 1
#define IO_2 2
#define IO_3 3
#define IO_4 4
#define IO_5 5
#define IO_6 6
#define IO_7 7
#define IO_8 8
#define IO_9 9
#define IO_10 10
#define IO_11 11

#endif