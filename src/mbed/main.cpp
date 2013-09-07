#include "gps_watch.h"

void vibrate_motor(int motor_num){
    if(motor_num < 0 || motor_num > 5){
        error_code();
        return;
    }
    motor_arr[motor_num].speed(0.5f);
    wait(3);
    motor_arr[motor_num].speed(0.0f);
}

void set_mode(char new_mode){
    if(new_mode != 'g' && new_mode != 'c' && new_mode != 'f'){
        error_code();
        return;
    }
    mode = new_mode;
}

void get_turn(){

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
