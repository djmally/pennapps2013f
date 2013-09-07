#include "gps_watch.h"

int bluetooth_test(){
    if(bt_rx){
        led1 = 1;
        led2 = 0;
        led3 = 1;
        led4 = 0;
    }
    wait(5);
    led1 = 0;
    led2 = 0;
    led3 = 0;
    led4 = 0;
}

//Vibrates one motor between motor 0 and motor 5 at 1/2 speed for 3 seconds
void vibrate_motor(int motor_num){
    if(motor_num < 0 || motor_num > 5){
        error_code();
        return;
    }
    motor_arr[motor_num] = 1;
}

//Modes: GPS, Compass, Find my phone
void set_mode(char new_mode){
    if(new_mode != 'g' && new_mode != 'c' && new_mode != 'f'){
        error_code();
        return;
    }
    mode = new_mode;
}

//Get a GPS turn direction from bluetooth
void get_turn(char motor_to_turn){
    if(((motor_to_turn << 7) >> 7) == 1){
        vibrate_motor(0);
    }
    if(((motor_to_turn << 6) >> 7) == 1){
        vibrate_motor[1];
    }
    if(((motor_to_turn << 5) >> 7) == 1){
	vibrate_motor[2];
    }
    if(((motor_to_turn << 4) >> 7) == 1){
        vibrate_motor[3];
    }
    if(((motor_to_turn << 3) >> 7) == 1){
        vibrate_motor[4];
    }
    if(((motor_to_turn << 2) >> 7) == 1){
	vibrate_motor[5];
    }
    wait(3);
    for(int i = 0; i < 6; i++)
    {
        motor_arr[motor_num].speed(0.0f);
    }

//Flashes the error code on the mbed's LEDs
void error_code(){
   led1 = 1; 
   led2 = 1; 
   led3 = 1; 
   led4 = 1; 
   wait(0.5);
   led1 = 0; 
   led2 = 0; 
   led3 = 0; 
   led4 = 0; 
}

int main(){
    bluetooth_test();
}
