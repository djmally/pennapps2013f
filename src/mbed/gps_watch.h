#include "mbed.h"
#include "Motor.h"

char mode = 'g';

Motor motor1(p21, p5, p6);
Motor motor2(p22, p7, p8);
Motor motor3(p23, p9, p10);
Motor motor4(p24, p11, p12);
Motor motor5(p25, p13, p14);
Motor motor6(p26, p15, p16);

Motor motor_arr[6] = {motor1, motor2, motor3, motor4, motor5, motor6}; 

DigitalOut led1(LED1);
DigitalOut led2(LED2);
DigitalOut led3(LED3);
DigitalOut led4(LED4);

void vibrate_motor(int motor_num);

void set_mode(char new_mode);

void get_turn(char motor_to_turn);

void error_code();
