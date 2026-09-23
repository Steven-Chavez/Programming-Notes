// Author: Steven Chavez
// Date: 9/23/2026
// Challenge: JBC 2 (Optimized Arc Motion)
#include <kipr/wombat.h>
#include <stdio.h>

const int RIGHT_MOTOR = 3;
const int LEFT_MOTOR = 0;

// Drives both motors forward at specified power levels
void drive(int left_power, int right_power, int sleep_ms) {
    motor(LEFT_MOTOR, left_power);
    motor(RIGHT_MOTOR, right_power);
    msleep(sleep_ms);
}

int main() {
    // 1. Approach the can straight
    drive(70, 70, 2500);
    
		// 2. Curve Right
    drive(30, 70, 2700);

		// 3. Curve Left 
		drive(70, 28, 10500); 

		// 4. Go back to start 
		drive(70, 70, 4500);
    
    
    ao(); // Turn off all motors at the end
    return 0;
}
