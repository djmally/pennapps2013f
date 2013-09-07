#include "gps_watch.h"

void vibrate_motor(int motor_num){
    if(motor_num < 0 || motor_num > 5){
        error_code();
        return;
    }
    motor_arr[motor_num].speed(0.5f);
}

void set_mode(char new_mode){
    if(new_mode != 'g' && new_mode != 'c' && new_mode != 'f'){
        error_code();
        return;
    }
    mode = new_mode;
}

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
}

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
    return 0;
}
