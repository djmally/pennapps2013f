#include "mbed.h"

char mode = 'g';

DigitalOut motor0(p21);
DigitalOut motor1(p22);
DigitalOut motor2(p23);
DigitalOut motor3(p24);
DigitalOut motor4(p25);
DigitalOut motor5(p26);

DigitalOut motor_arr[6] = {motor0, motor1, motor2, motor3, motor4, motor5};

DigitalOut led1(LED1);
DigitalOut led2(LED2);
DigitalOut led3(LED3);
DigitalOut led4(LED4);

DigitalOut bt_tx(p19);
DigitalIn bt_rx(p20);

void vibrate_motor(int motor_num);

void set_mode(char new_mode);

void get_turn(char motor_to_turn);

void error_code();
